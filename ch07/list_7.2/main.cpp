#include <iostream>

class Base
{
public:
    Base() { std::cout << "Baseコンストラクター" << std::endl; }
    ~Base() { std::cout << "Baseデストラクター" << std::endl; }
};

class Derived : public Base
{
public:
    Derived() { std::cout << "Derivedコンストラクター" << std::endl; }
    ~Derived() { std::cout << "Derivedデストラクター" << std::endl; }
};

class MoreDerived : public Derived
{
public:
    MoreDerived() { std::cout << "MoreDerivedコンストラクター" << std::endl; }
    ~MoreDerived() { std::cout << "MoreDerivedデストラクター" << std::endl; }
};

int main()
{
    MoreDerived more_derived;
    std::cout << "オブジェクト構築完了" << std::endl;
}
