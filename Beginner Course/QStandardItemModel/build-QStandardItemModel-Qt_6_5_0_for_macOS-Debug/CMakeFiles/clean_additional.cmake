# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QStandardItemModel_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QStandardItemModel_autogen.dir/ParseCache.txt"
  "QStandardItemModel_autogen"
  )
endif()
