#include <iostream>
#include <string>

int main()
{
    std::string str0 = "Hello";

    std::string str1 = str0 + " World";
    std::cout << "str1: " << str1 << std::endl;

    std::string str2 = " World";
    str0 += str2;
    std::cout << "str0: " << str0 << std::endl;

    // std::stringが右辺にあれば、左辺にC文字列が来てもよい
    std::string str3 = "Say " + str0;
    std::cout << "str3: " << str3 << std::endl;
}
