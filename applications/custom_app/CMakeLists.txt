# add target and source files
add_executable(custom_app
  src/custom_app_main.cpp
  src/AwesomeClass.cpp
)

# include directories
target_include_directories(custom_app
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

# link dependencies
target_link_libraries(custom_app
  PRIVATE
    libprocessing
    libstreaming
)

# target_include_directories()

