#include <iostream>

class Base
{
public:
    explicit Base(int value)
    {
        std::cout << value << std::endl;
    }
};

class DerivedA : virtual public Base
{
public:
    DerivedA() : Base{ 1 } {}
};

class DerivedB : virtual public Base
{
public:
    DerivedB() : Base{ 2 } {}
};

class MoreDerived : public DerivedA, public DerivedB
{
public:
    // 仮想基底クラスのコンストラクター呼び出し
    MoreDerived() : Base{ 3 } {}
};

// 定義されているクラスの中で最も派生しているクラス
class MoreMoreDerived : public MoreDerived
{
public:
    // ここでも仮想基底クラスのコンストラクター呼び出し
    MoreMoreDerived() : Base{ 4 } {}
};

int main()
{
    // 最も派生しているMoreMoreDerivedではなく、
    // MoreDerivedのインスタンスを生成するときには
    // どのコンストラクターで渡した値が出力される？
    MoreDerived more_derived;
}
