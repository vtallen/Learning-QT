# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QDirDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QDirDemo_autogen.dir/ParseCache.txt"
  "QDirDemo_autogen"
  )
endif()
