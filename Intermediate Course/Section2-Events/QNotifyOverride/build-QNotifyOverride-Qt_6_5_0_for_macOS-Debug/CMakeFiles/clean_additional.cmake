# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QNotifyOverride_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QNotifyOverride_autogen.dir/ParseCache.txt"
  "QNotifyOverride_autogen"
  )
endif()
