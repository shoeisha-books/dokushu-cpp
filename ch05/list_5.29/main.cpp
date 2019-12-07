#include <iostream>

class C
{
    int a;

public:
    explicit C(int a) : a{ a } { }

    void copy_and_set(int value) const // constメンバー関数なので
    // メンバー変数は変更できない
    {
        std::cout << "copy_and_set: a == " << a << std::endl;
        [*this, value] () mutable // thisが指し示す先のインスタンスを丸ごとコピー
        {
            std::cout << "lambda: a == " << a << std::endl;
            a = value; // OK。ただし、aはコピーされたインスタンスのaを変更する
            std::cout << "lambda: a == " << a << std::endl;
        }();
        std::cout << "copy_and_set: a == " << a << std::endl;
    }
};

int main()
{
    C c{ 42 };
    c.copy_and_set(0);
}
