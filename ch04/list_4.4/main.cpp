#include <iostream>

class A
{
public:
    ~A();
};

A::~A()
{
    std::cout << "デストラクター呼び出し" << std::endl;
}

int main()
{
    if (true)
    {
        std::cout << "if文" << std::endl;
        A a;
    }

    std::cout << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cout << "for文(" << i << ")" << std::endl;
        A a;
    }

    std::cout << std::endl;

    {
        std::cout << "ただのスコープ" << std::endl;
        A a;
    }

    std::cout << std::endl;

    std::cout << "main()関数の最後" << std::endl;
}
