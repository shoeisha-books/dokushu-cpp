#include <iostream>

class Base
{
public:
    virtual void foo();
};

void Base::foo() // 定義にはvirtualは書かない
{
    std::cout << "Base::foo()" << std::endl;
}

class Derived : public Base
{
public:
    void foo() override; // 派生クラスでメンバー関数をオーバーライド
    //void foo(int i) override; // エラー。対応する仮想関数が基底クラスにない
    void foo(int i); // OK。単なるオーバーロードは追加できる
};

void Derived::foo() // 定義にはoverrideは書かない
{
    std::cout << "Derived::foo() override" << std::endl;
}

void Derived::foo(int i)
{
    std::cout << "Derived::foo(int)" << std::endl;
}

int main()
{
    Derived derived;
    derived.foo(); // 仮想関数呼び出し
    derived.foo(42); // 仮想関数ではないオーバーロードの呼び出し
}
