# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QPainterPath_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QPainterPath_autogen.dir/ParseCache.txt"
  "QPainterPath_autogen"
  )
endif()
