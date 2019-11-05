#include <iostream>

class Base
{
public:
    void foo();
};

void Base::foo()
{
    std::cout << "Base::foo()" << std::endl;
}

class Derived : public Base
{
public:
    using Base::foo; // 基底クラスのfoo()を呼び出せるようにする

    void foo(int v); // 派生クラスで追加したオーバーロード
};

void Derived::foo(int v)
{
    std::cout << "Derived::foo(" << v << ")" << std::endl;
}

int main()
{
    Derived derived;
    derived.foo(); // 基底クラスのfoo()が呼ばれる
    derived.foo(42); // 派生クラスで追加したオーバーロードが呼ばれる
}
