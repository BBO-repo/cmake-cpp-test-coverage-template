#ifndef MESSAGE_STREAMING_HDR
#define MESSAGE_STREAMING_HDR

#include <string>

struct MessageStreaming
{
    static void StreamMessageData(std::string); 
    static void StreamWaringData(std::string); 
    static void StreamErrorData(std::string); 
};

#endif // MESSAGE_STREAMING_HDR