# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MessageBox_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MessageBox_autogen.dir/ParseCache.txt"
  "MessageBox_autogen"
  )
endif()
