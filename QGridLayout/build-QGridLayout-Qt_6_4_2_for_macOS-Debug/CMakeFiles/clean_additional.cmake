# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QGridLayout_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QGridLayout_autogen.dir/ParseCache.txt"
  "QGridLayout_autogen"
  )
endif()
