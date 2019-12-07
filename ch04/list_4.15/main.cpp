#include <iostream>

class A
{
    int i;

public:
    // コンストラクターの宣言と定義
    A() : i(0) { }

    // メンバー関数の宣言と定義
    void set_i(int i)
    {
        this->i = i;
    }

    // constメンバー関数も定義できる
    void show() const
    {
        std::cout << i << std::endl;
    }
};

int main()
{
    A a;
    a.show();
    a.set_i(123);
    a.show();
}
