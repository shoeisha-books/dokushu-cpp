#include <iostream>

class BaseA
{
    int value;

public:
    explicit BaseA(int value) : value{ value } { }

    void show_BaseA()
    {
        std::cout << "BaseA.value = " << value << std::endl;
    }
};

class BaseB
{
    int value;

public:
    explicit BaseB(int value) : value{ value } { }

    void show_BaseB()
    {
        std::cout << "BaseB.value = " << value << std::endl;
    }
};

class Derived : public BaseA, public BaseB
{
public:
    Derived(int a, int b);
};

Derived::Derived(int a, int b)
    : BaseA{ a } // BaseAのコンストラクターへ引数を渡す
    , BaseB{ b } // BaseBのコンストラクターへ引数を渡す
{
}

int main()
{
    Derived derived{ 42, 72 };
    derived.show_BaseA();
    derived.show_BaseB();
}
