# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/FirstQtApp_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/FirstQtApp_autogen.dir/ParseCache.txt"
  "FirstQtApp_autogen"
  )
endif()
