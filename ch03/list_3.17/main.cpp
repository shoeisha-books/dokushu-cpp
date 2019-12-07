#include <iostream>

class A
{
    int value;

public:
    void set_value(int value);
    int get_value() const;
};

void A::set_value(int value)
{
    // value = value; // エラーではないが、どちらも引数のvalueのこと
    this->value = value; // メンバー変数のvalueに代入している
}

int A::get_value() const
{
    return value;
}

int main()
{
    A a;
    a.set_value(42);
    std::cout << a.get_value() << std::endl;
}
