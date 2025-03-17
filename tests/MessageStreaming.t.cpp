#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <sstream>

#include "MessageStreaming.hpp"


TEST_CASE( "equal", "[MessageStreaming]" ) {
    auto stdoutBuffer = std::cout.rdbuf();
    std::ostringstream oss;
    std::cout.rdbuf(oss.rdbuf());
    MessageStreaming::StreamMessageData("Hi!");
    std::cout.rdbuf(stdoutBuffer);
    REQUIRE(oss.str() == "INFO: Hi!\n");
}