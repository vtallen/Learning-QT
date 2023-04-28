# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/CheckboxRadiobutton_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/CheckboxRadiobutton_autogen.dir/ParseCache.txt"
  "CheckboxRadiobutton_autogen"
  )
endif()
