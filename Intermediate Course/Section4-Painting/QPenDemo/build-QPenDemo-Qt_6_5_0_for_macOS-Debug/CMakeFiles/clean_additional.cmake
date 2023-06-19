# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QPenDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QPenDemo_autogen.dir/ParseCache.txt"
  "QPenDemo_autogen"
  )
endif()
