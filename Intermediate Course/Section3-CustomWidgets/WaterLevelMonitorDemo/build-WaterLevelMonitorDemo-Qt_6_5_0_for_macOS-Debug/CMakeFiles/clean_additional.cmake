# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/WaterLevelMonitorDemo_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/WaterLevelMonitorDemo_autogen.dir/ParseCache.txt"
  "WaterLevelMonitorDemo_autogen"
  )
endif()
