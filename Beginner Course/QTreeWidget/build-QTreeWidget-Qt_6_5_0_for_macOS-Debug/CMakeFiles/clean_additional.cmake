# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QTreeWidget_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QTreeWidget_autogen.dir/ParseCache.txt"
  "QTreeWidget_autogen"
  )
endif()
