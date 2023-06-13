# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/QDialogButtonBox_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QDialogButtonBox_autogen.dir/ParseCache.txt"
  "QDialogButtonBox_autogen"
  )
endif()
