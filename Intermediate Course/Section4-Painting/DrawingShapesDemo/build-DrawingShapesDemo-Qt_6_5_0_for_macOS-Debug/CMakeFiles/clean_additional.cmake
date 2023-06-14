# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DrawingShapesDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DrawingShapesDemo_autogen.dir/ParseCache.txt"
  "DrawingShapesDemo_autogen"
  )
endif()
