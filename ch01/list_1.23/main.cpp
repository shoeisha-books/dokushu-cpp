#include <string>
#include <iostream>

int main()
{
    std::string hello = "Hello";

    std::cout << hello;

    hello = ", string"; // より長い文字列をあとから代入できる

    std::cout << hello << std::endl;
}
