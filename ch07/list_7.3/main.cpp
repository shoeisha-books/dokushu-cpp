#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Baseデフォルトコンストラクター" << std::endl;
    }
    explicit Base(int i)
    {
        std::cout << "A引数付きコンストラクター: " << i << std::endl;
    }
};

class Derived : public Base
{
public:
    explicit Derived(int i) : Base{ i } {}
};

int main()
{
    Derived derived{ 42 };
}
