# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QPalette_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QPalette_autogen.dir/ParseCache.txt"
  "QPalette_autogen"
  )
endif()
