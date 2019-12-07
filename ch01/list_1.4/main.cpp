#include <iostream>

int main()
{
    int i = 42;

    std::cout << "++i: " << ++i << std::endl; // 前置

    std::cout << "i: " << i << std::endl;

    std::cout << "i++: " << i++ << std::endl; // 後置

    std::cout << "i: " << i << std::endl;
}
