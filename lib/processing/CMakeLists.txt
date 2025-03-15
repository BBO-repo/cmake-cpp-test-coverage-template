# this lib is implented with shared and with object
add_library(libprocessing SHARED
  src/MathProcessor.cpp
)

target_include_directories(libprocessing
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
  #PRIVATE
  # private include if needed
)