#include <iostream>

class A
{
public:
    void foo() { std::cout << "A::foo" << std::endl; }
};

class B
{
    A a;

public:
    // メンバー変数のaを返す変換関数
    operator A& () { return a; }
};

int main()
{
    B b;
    b.foo(); // エラー。Bはfooというメンバー関数を持たない
}
