# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CalorieCounter_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CalorieCounter_autogen.dir/ParseCache.txt"
  "CalorieCounter_autogen"
  )
endif()
