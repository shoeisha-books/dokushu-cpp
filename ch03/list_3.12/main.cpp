#include <iostream>

class Base // 基底となるクラス
{
public:
    void foo();
};

void Base::foo()
{
    std::cout << "foo()" << std::endl;
}

class Derived : public Base // Baseのメンバーを継承する
{
public:
    void bar(); // 派生クラスで追加した機能
};

void Derived::bar()
{
    std::cout << "bar()" << std::endl;
}

int main()
{
    Base base;
    base.foo(); // 基底クラスのfooが呼ばれる
    // base.bar(); // エラー。基底クラスには派生クラスで追加した
                   // メンバーは存在していないので呼び出せない
    
    Derived derived;
    derived.foo(); // 基底クラスのfooが呼ばれる
    derived.bar(); // 派生クラスで追加したbarが呼ばれる
}
