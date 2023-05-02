# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QInputDialog_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QInputDialog_autogen.dir/ParseCache.txt"
  "QInputDialog_autogen"
  )
endif()
