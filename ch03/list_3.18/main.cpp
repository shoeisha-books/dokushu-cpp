#include <iostream>

class Base
{
    int value = 0;

public:
    void set_value(int value);
    int get_value() const;
};

void Base::set_value(int value)
{
    this->value = value;
}

int Base::get_value() const
{
    return value;
}

// 構造体がクラスから派生することもできる（デフォルトのアクセス指定子はpublic）
struct Derived : Base
{
    // コンストラクターもデストラクターも持てる
    Derived();
    ~Derived();
};

Derived::Derived()
{
    std::cout << "コンストラクター" << std::endl;
}

Derived::~Derived()
{
    std::cout << "デストラクター" << std::endl;
}

int main()
{
    Derived d;

    std::cout << d.get_value() << std::endl;

    d.set_value(42);

    std::cout << d.get_value() << std::endl;
}
