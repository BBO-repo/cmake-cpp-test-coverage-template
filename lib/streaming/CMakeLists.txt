# this lib is implented with object and with shared
add_library(libstreaming OBJECT
  src/MessageStreaming.cpp
)

# set code coverage
append_coverage_compiler_flags()

target_include_directories(libstreaming
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
  #PRIVATE
  # private include if needed
)
