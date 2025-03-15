#include "AwesomeClass.hpp"

AwesomeClass::AwesomeClass(int num, std::string str) : m_num(num), m_str(str) {}

AwesomeClass::~AwesomeClass() {}

std::string AwesomeClass::WhoAmI()
{
    auto result = "m_num: " + std::to_string(m_num) + " m_str: " + m_str;
    return result;
}