#include "AwesomeClass.hpp"
#include "MessageStreaming.hpp"
#include "MathProcessor.hpp"

int main() {
    AwesomeClass ac(12, "yeah");
    auto who_it_is = ac.WhoAmI();
    
    MessageStreaming::StreamMessageData(who_it_is);
    auto square = processing::ComputeSquare(ac.GetNum());
    std::cout << square << std::endl;

    return 0;
}

