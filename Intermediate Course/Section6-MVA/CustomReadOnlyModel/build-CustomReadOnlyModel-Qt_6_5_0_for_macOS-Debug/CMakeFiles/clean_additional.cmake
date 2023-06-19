# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CustomReadOnlyModel_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CustomReadOnlyModel_autogen.dir/ParseCache.txt"
  "CustomReadOnlyModel_autogen"
  )
endif()
