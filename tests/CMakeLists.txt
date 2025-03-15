Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.0 # or a later release
)

FetchContent_MakeAvailable(Catch2)

# set code coverage
include(CodeCoverage)
append_coverage_compiler_flags()

include(CTest)
include(Catch)

enable_testing()

add_executable(all_tests MathProcessor.t.cpp MessageStreaming.t.cpp)
include_directories(PUBLIC ${CMAKE_SOURCE_DIR}/lib/processing/inc)
target_link_libraries(all_tests
  PRIVATE
    Catch2::Catch2WithMain
    libprocessing
    libstreaming
)

catch_discover_tests(all_tests)
