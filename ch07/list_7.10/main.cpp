#include <iostream>

class BaseA
{
public:
    void method_BaseA()
    {
        std::cout << "BaseA::method_BaseA()" << std::endl;
    }
};

class BaseB
{
public:
    void method_BaseB()
    {
        std::cout << "BaseB::method_BaseB()" << std::endl;
    }
};

class Derived
    : public BaseA
    , public BaseB // 2つ目のクラスを継承
{
public:
    void method_Derived()
    {
        std::cout << "Derived::method_Derived()" << std::endl;
    }
};

int main()
{
    Derived derived;
    derived.method_BaseA(); // BaseAから継承したメンバー関数の呼び出し
    derived.method_BaseB(); // BaseBから継承したメンバー関数の呼び出し
    derived.method_Derived(); // Derivedで定義したメンバー関数の呼び出し

    BaseA& base_a = derived; // DerivedはBaseAの派生クラスなのでBaseAとして扱える

    // base_a.method_BaseB(); // エラー。BaseAの参照を使っているので、
                              // BaseBのメンバー関数を呼び出せない
    
    //base_a.method_Derived(); // エラー。同様にDerivedではないので呼べない

    BaseB& base_b = derived; // DerivedはBaseBの派生クラスでもあるので
                             // BaseBとしても扱える

    //base_b.method_Derived(); // エラー。BaseA同様
    //base_b.method_Derived(); // エラー。BaseA同様
}
