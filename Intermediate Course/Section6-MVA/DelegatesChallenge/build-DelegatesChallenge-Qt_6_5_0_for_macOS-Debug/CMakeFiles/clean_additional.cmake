# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DelegatesChallenge_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DelegatesChallenge_autogen.dir/ParseCache.txt"
  "DelegatesChallenge_autogen"
  )
endif()
