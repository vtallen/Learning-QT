# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/QNetworkAccessManager_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/QNetworkAccessManager_autogen.dir/ParseCache.txt"
  "QNetworkAccessManager_autogen"
  )
endif()
