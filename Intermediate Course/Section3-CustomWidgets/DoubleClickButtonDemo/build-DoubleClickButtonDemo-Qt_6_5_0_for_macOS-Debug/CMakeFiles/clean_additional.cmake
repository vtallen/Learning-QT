# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DoubleClickButtonDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DoubleClickButtonDemo_autogen.dir/ParseCache.txt"
  "DoubleClickButtonDemo_autogen"
  )
endif()
