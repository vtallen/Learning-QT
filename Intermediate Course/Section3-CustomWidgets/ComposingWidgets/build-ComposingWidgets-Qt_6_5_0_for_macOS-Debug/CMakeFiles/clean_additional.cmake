# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ComposingWidgets_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ComposingWidgets_autogen.dir/ParseCache.txt"
  "ComposingWidgets_autogen"
  )
endif()
