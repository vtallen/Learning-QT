# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QListWidgetDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QListWidgetDemo_autogen.dir/ParseCache.txt"
  "QListWidgetDemo_autogen"
  )
endif()
