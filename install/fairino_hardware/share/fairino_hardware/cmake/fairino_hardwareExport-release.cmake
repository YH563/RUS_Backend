#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fairino_hardware::fairino_hardware" for configuration "Release"
set_property(TARGET fairino_hardware::fairino_hardware APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(fairino_hardware::fairino_hardware PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/fairino_hardware/libfairino_hardware.so"
  IMPORTED_SONAME_RELEASE "libfairino_hardware.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS fairino_hardware::fairino_hardware )
list(APPEND _IMPORT_CHECK_FILES_FOR_fairino_hardware::fairino_hardware "${_IMPORT_PREFIX}/lib/fairino_hardware/libfairino_hardware.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
