# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ResourcesDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ResourcesDemo_autogen.dir/ParseCache.txt"
  "ResourcesDemo_autogen"
  )
endif()
