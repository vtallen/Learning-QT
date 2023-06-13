# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/SliderProgressBar_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/SliderProgressBar_autogen.dir/ParseCache.txt"
  "SliderProgressBar_autogen"
  )
endif()
