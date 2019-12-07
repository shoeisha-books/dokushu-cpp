#include <iostream>

class A
{
public:
    A();
    ~A();
};

A::A()
{
    std::cout << "コンストラクター" << std::endl;
}

A::~A()
{
    std::cout << "デストラクター" << std::endl;
}

A a; // グローバル変数

int main()
{
    std::cout << "main()関数" << std::endl;
}
