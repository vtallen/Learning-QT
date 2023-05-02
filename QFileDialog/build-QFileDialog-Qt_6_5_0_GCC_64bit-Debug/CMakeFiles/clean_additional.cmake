# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QFileDialog_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QFileDialog_autogen.dir/ParseCache.txt"
  "QFileDialog_autogen"
  )
endif()
