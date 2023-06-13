# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/PostEventsDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/PostEventsDemo_autogen.dir/ParseCache.txt"
  "PostEventsDemo_autogen"
  )
endif()
