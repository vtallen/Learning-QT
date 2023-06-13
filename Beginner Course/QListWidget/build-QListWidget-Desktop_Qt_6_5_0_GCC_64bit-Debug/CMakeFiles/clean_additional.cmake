# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QListWidget_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QListWidget_autogen.dir/ParseCache.txt"
  "QListWidget_autogen"
  )
endif()
