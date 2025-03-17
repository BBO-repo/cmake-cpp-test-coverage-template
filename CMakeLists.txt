# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.15)

# Name of the project
project(cmake_template)

# Set the C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)

option(COVERAGE "Enable COVERAGE" OFF)
message(STATUS "COVERAGE ${COVERAGE}")
if(COVERAGE)
  set(CMAKE_BUILD_TYPE Debug)
  # Add custom cmake modules
  list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake-modules)
  include(CodeCoverage)
endif()

# Add subdirectories
add_subdirectory(${CMAKE_SOURCE_DIR}/lib/processing)
add_subdirectory(${CMAKE_SOURCE_DIR}/lib/streaming)
add_subdirectory(${CMAKE_SOURCE_DIR}/applications/custom_app)
add_subdirectory(${CMAKE_SOURCE_DIR}/tests)
