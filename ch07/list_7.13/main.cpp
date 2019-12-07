#include <iostream>

class Base
{
    int value;

public:
    Base(int value) : value{ value } { }
    void show();
};

void Base::show()
{
    std::cout << "this: " << this << std::endl
        << "this->value: " << value << std::endl;
}

class DerivedA : public Base
{
public:
    DerivedA(int value) : Base{ value } { }
};

class DerivedB : public Base
{
public:
    DerivedB(int value) : Base{ value } { }
};

// DerivedAもDerivedBもBaseから派生していることに注意
class MoreDerived : public DerivedA, public DerivedB
{
public:
    MoreDerived(int d_a, int d_b)
        : DerivedA{ d_a }, DerivedB{ d_b }
    {
    }
};

int main()
{
    MoreDerived more_derived{ 42, 72 };

    // DerivedAが継承したBase::show()の呼び出し
    more_derived.DerivedA::show();

    // DerivedBが継承したBase::show()の呼び出し
    more_derived.DerivedB::show();

    // DerivedAの参照を経由してBaseへの参照を取得
    Base& base1 = static_cast<DerivedA&>(more_derived);

    // DerivedAの参照を経由したので、DerivedAが継承したBase::show()の呼び出し
    base1.show();

    // DerivedBの参照を経由してBaseへの参照を取得
    Base& base2 = static_cast<DerivedB&>(more_derived);

    // DerivedBの参照を経由したので、DerivedBが継承したBase::show()の呼び出し
    base2.show();
}
