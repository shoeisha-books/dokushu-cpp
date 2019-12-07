#include <iostream>

namespace // 無名名前空間
{
    void say_hello()
    {
        std::cout << "Hello, anonymous namespace" << std::endl;
    }
}

int main()
{
    say_hello(); // 無名名前空間は名前空間の指定がない
}