# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/StyleSheets_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/StyleSheets_autogen.dir/ParseCache.txt"
  "StyleSheets_autogen"
  )
endif()
