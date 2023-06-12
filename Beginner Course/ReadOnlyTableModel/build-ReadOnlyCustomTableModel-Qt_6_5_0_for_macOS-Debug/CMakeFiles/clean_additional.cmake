# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/ReadOnlyCustomTableModel_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/ReadOnlyCustomTableModel_autogen.dir/ParseCache.txt"
  "ReadOnlyCustomTableModel_autogen"
  )
endif()
