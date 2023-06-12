# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/EventPropagation_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/EventPropagation_autogen.dir/ParseCache.txt"
  "EventPropagation_autogen"
  )
endif()
