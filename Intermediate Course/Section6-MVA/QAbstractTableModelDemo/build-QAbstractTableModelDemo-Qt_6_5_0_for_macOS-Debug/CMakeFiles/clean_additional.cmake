# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QAbstractTableModelDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QAbstractTableModelDemo_autogen.dir/ParseCache.txt"
  "QAbstractTableModelDemo_autogen"
  )
endif()
