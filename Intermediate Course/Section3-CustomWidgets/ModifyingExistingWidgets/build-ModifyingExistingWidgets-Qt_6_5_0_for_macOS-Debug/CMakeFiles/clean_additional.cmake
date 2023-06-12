# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ModifyingExistingWidgets_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ModifyingExistingWidgets_autogen.dir/ParseCache.txt"
  "ModifyingExistingWidgets_autogen"
  )
endif()
