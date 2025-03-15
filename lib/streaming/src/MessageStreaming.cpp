#include "MessageStreaming.hpp"

#include <iostream>


void MessageStreaming::StreamMessageData(std::string data) 
{
    std::cout << "INFO: " << data << std::endl; 
}

void MessageStreaming::StreamWaringData(std::string data)
{
    std::cout << "WARNING: " << data << std::endl; 
}

void MessageStreaming::StreamErrorData(std::string data)
{
    std::cerr << "ERROR: " << data << std::endl; 
}