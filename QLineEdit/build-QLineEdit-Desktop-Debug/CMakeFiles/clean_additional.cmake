# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QLineEdit_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QLineEdit_autogen.dir/ParseCache.txt"
  "QLineEdit_autogen"
  )
endif()
