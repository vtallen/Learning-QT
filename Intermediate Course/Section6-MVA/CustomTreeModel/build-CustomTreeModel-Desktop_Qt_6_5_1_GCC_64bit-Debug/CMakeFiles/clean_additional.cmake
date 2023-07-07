# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CustomTreeModel_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CustomTreeModel_autogen.dir/ParseCache.txt"
  "CustomTreeModel_autogen"
  )
endif()
