# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DrawOnPixmapDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DrawOnPixmapDemo_autogen.dir/ParseCache.txt"
  "DrawOnPixmapDemo_autogen"
  )
endif()
