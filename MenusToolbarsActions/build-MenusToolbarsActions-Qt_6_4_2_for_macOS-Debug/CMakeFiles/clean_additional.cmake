# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/MenusToolbarsActions_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/MenusToolbarsActions_autogen.dir/ParseCache.txt"
  "MenusToolbarsActions_autogen"
  )
endif()
