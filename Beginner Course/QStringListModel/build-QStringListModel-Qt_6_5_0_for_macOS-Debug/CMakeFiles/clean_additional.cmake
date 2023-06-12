# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QStringListModel_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QStringListModel_autogen.dir/ParseCache.txt"
  "QStringListModel_autogen"
  )
endif()
