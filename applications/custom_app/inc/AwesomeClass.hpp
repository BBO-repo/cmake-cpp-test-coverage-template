#ifndef AWESOME_CLASS_HDR
#define AWESOME_CLASS_HDR

#include <iostream>

class AwesomeClass {
    public:
      AwesomeClass(int, std::string);
      ~AwesomeClass();
      std::string WhoAmI();
      int GetNum() { return m_num; }
    private:
      int m_num;
      std::string m_str;
};

#endif // AWESOME_CLASS_HDR