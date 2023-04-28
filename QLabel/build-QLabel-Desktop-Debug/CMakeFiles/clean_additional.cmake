# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QLabel_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QLabel_autogen.dir/ParseCache.txt"
  "QLabel_autogen"
  )
endif()
