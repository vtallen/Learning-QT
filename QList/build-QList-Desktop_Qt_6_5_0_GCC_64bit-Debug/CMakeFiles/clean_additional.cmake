# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QList_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QList_autogen.dir/ParseCache.txt"
  "QList_autogen"
  )
endif()
