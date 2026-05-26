#!/usr/bin/env python3
"""
键盘控制节点 - 手眼标定控制器

按键映射:
  [c] 捕获一组标定数据 (调用 calibration_capture 服务)
  [C] 执行标定计算 (调用 calibration_compute 服务)
  [s] 保存标定结果 (调用 calibration_save 服务)
  [h] 打印帮助信息
  [q / Ctrl+C] 退出

用法:
  ros2 run rus_sim_calibration calibration_controller.py
"""

import sys
import threading
import time

import rclpy
from rclpy.node import Node
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rus_sim_interfaces.srv import CalibrationCapture, CalibrationCompute, CalibrationSave


class CalibrationController(Node):
    """键盘控制标定流程的节点"""

    def __init__(self):
        super().__init__("calibration_controller")

        # ---------- 服务客户端 ----------
        cb_group = MutuallyExclusiveCallbackGroup()

        self.capture_cli = self.create_client(
            CalibrationCapture, "calibration_capture", callback_group=cb_group
        )
        self.compute_cli = self.create_client(
            CalibrationCompute, "calibration_compute", callback_group=cb_group
        )
        self.save_cli = self.create_client(
            CalibrationSave, "calibration_save", callback_group=cb_group
        )

        # 等待服务就绪
        self.get_logger().info("等待标定服务启动...")
        self._wait_for_services()

        self._print_help()

    # ------------------------------------------------------------------
    #  服务等待
    # ------------------------------------------------------------------
    def _wait_for_services(self):
        services = {
            "calibration_capture": self.capture_cli,
            "calibration_compute": self.compute_cli,
            "calibration_save": self.save_cli,
        }
        for name, client in services.items():
            if not client.wait_for_service(timeout_sec=5.0):
                self.get_logger().warn(f"服务 {name} 未在 5 秒内就绪，请确认标定节点是否运行。")
            else:
                self.get_logger().info(f"✓ 服务 {name} 已就绪")

    # ------------------------------------------------------------------
    #  帮助信息
    # ------------------------------------------------------------------
    def _print_help(self):
        help_msg = """
╔══════════════════════════════════════════╗
║        手眼标定控制器 - 按键帮助          ║
╠══════════════════════════════════════════╣
║  [c]  捕获一组标定数据                    ║
║  [C]  执行标定计算                        ║
║  [s]  保存标定结果                        ║
║  [h]  显示此帮助                          ║
║  [q]  退出                                ║
╚══════════════════════════════════════════╝
"""
        print(help_msg)

    # ------------------------------------------------------------------
    #  请求封装
    # ------------------------------------------------------------------
    def _call_capture(self):
        req = CalibrationCapture.Request()
        future = self.capture_cli.call_async(req)
        # 等待最多10秒，为了避免 future.result(timeout) 的问题，采用轮询方式
        end_time = time.time() + 10.0
        while rclpy.ok() and not future.done():
            timeout = end_time - time.time()
            if timeout <= 0:
                break
            # 短暂休眠让出CPU，不阻塞事件循环
            time.sleep(0.1)
        if future.done():
            try:
                resp = future.result()
                icon = "✓" if resp.success else "✗"
                print(f"  [{icon}] {resp.message}")
            except Exception as e:
                print(f"  [✗] 捕获服务调用失败: {e}")
        else:
            print("  [✗] 捕获超时")

    def _call_compute(self):
        """调用计算服务"""
        req = CalibrationCompute.Request()
        future = self.compute_cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            resp = future.result()
            icon = "✓" if resp.success else "✗"
            print(f"  [{icon}] {resp.message}")
            if resp.success:
                print(f"       眼在手上矩阵 (eye_in_hand):\n{self._fmt_matrix(resp.eye_in_hand_matrix)}")
                print(f"       眼在手外矩阵 (eye_to_hand):\n{self._fmt_matrix(resp.eye_to_hand_matrix)}")
        else:
            print(f"  [✗] 计算服务调用失败: {future.exception()}")

    def _call_save(self, file_path: str = ""):
        """调用保存服务"""
        req = CalibrationSave.Request()
        req.file_path = file_path
        future = self.save_cli.call_async(req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            resp = future.result()
            icon = "✓" if resp.success else "✗"
            print(f"  [{icon}] {resp.message}")
        else:
            print(f"  [✗] 保存服务调用失败: {future.exception()}")

    @staticmethod
    def _fmt_matrix(mat: tuple) -> str:
        """将 16 元素数组格式化为 4×4 矩阵字符串"""
        if not any(abs(v) > 1e-12 for v in mat):
            return "        (无数据)"
        lines = []
        for r in range(4):
            row = "          ["
            row += ", ".join(f"{mat[r * 4 + c]:10.6f}" for c in range(4))
            row += "]"
            lines.append(row)
        return "\n".join(lines)

    # ------------------------------------------------------------------
    #  键盘事件循环
    # ------------------------------------------------------------------
    def run(self):
        """在主线程中循环读取键盘输入"""
        print("\n请按键进行操作（按 [h] 显示帮助）...\n")

        while rclpy.ok():
            key = self._getch()

            if key == "c":
                print("[捕获] 正在捕获一组标定数据...")
                self._call_capture()

            elif key == "C":
                print("[计算] 正在执行标定计算...")
                self._call_compute()

            elif key == "s":
                print("[保存] 正在保存标定结果...")
                self._call_save()

            elif key == "h":
                self._print_help()

            elif key == "q":
                print("\n退出标定控制器。")
                break

            else:
                pass

        self.destroy_node()
        rclpy.shutdown()

    def _getch(self) -> str:
        """获取单个按键输入（兼容终端和非终端环境）"""
        if sys.stdin.isatty():
            # 终端环境：读取单字符，不回显
            import tty
            import termios
            fd = sys.stdin.fileno()
            old = termios.tcgetattr(fd)
            try:
                tty.setraw(fd)
                ch = sys.stdin.read(1)
            finally:
                termios.tcsetattr(fd, termios.TCSADRAIN, old)
            return ch
        else:
            # 非终端环境：读取整行取首字符
            try:
                line = sys.stdin.readline()
                return line.strip() if line else ""
            except EOFError:
                return ""


def main(args=None):
    rclpy.init(args=args)
    node = CalibrationController()

    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(node)

    spin_thread = threading.Thread(target=executor.spin, daemon=True)
    spin_thread.start()

    try:
        node.run()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
