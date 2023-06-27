# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CustomStarDelegateDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CustomStarDelegateDemo_autogen.dir/ParseCache.txt"
  "CustomStarDelegateDemo_autogen"
  )
endif()
