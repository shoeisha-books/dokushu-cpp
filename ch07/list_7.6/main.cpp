#include <iostream>

class Base
{
public:
    virtual void method();
};

void Base::method()
{
    // 基底クラスでの実装：派生クラスから呼び出されることを期待する
    std::cout << "Base::method()" << std::endl;
}

class Derived : public Base
{
public:
    void method() override;
};

void Derived::method()
{
    std::cout << "Derived::method()" << std::endl;
    Base* base = this; // 基底クラスへのポインターを取得
    base->method(); // 基底クラスのメンバーを呼んでいる……つもり
}

int main()
{
    Derived derived;
    derived.method(); // オーバーライドしたメンバー関数の呼び出し
}
