#include <iostream>

class Base
{
public:
    void method_Base()
    {
        std::cout << "Base: " << this << std::endl;
    }
};

// DerivedAは仮想基底クラスとしてBaseを継承する
class DerivedA : virtual public Base
{
public:
    void method_DerivedA()
    {
        std::cout << "DerivedA: " << this << std::endl;
    }
};

// DerivedBは仮想基底クラスとしてBaseを継承する
class DerivedB : virtual public Base
{
public:
    void method_DerivedB()
    {
        std::cout << "DerivedB: " << this << std::endl;
    }
};

// DerivedAもDerivedBもBaseから派生しているが、
// Baseは仮想基底クラス指定されているので
// MoreDerivedにはBaseはただ1つしか存在しない
class MoreDerived : public DerivedA, public DerivedB
{
public:
    void method_MoreDerived()
    {
        std::cout << "MoreDerived: " << this << std::endl;
    }
};

int main()
{
    MoreDerived more_derived;

    // これらのメンバー関数はこれまでどおり普通に継承されるので呼び出せる
    more_derived.method_DerivedA();
    more_derived.method_DerivedB();
    more_derived.method_MoreDerived();
    
    // 今までは曖昧だったが、Baseは仮想基底クラスなので
    // 曖昧にならず呼び出すことができる
    more_derived.method_Base();
    
    // こちらも曖昧にならずBaseの参照を取得できる
    Base& base = more_derived;
}
