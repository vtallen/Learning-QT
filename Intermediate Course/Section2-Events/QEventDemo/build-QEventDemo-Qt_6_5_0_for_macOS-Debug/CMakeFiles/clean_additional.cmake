# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QEventDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QEventDemo_autogen.dir/ParseCache.txt"
  "QEventDemo_autogen"
  )
endif()
