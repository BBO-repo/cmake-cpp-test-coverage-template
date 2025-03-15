# this lib is implented with shared and with object
add_library(libprocessing SHARED
  src/MathProcessor.cpp
)

# set code coverage
include(CodeCoverage)
append_coverage_compiler_flags()

target_include_directories(libprocessing
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
  #PRIVATE
  # private include if needed
)

# set_target_properties(libprocessing
#   PROPERTIES
#     VERSION 0.1.0
#     SOVERSION 1
# )
