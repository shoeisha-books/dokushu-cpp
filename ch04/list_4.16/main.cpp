#include <iostream>

class A
{
    int i;

public:
    // コンストラクターをインライン指定付きで宣言
    inline A();
    
    // 自動でインラインになるメンバー関数
    void set_i(int i)
    {
        this->i = i;
    }
    
    // インラインにならないメンバー関数
    void show() const;
};

A::A() : i(0) { } // 定義にはinlineは不要

void A::show() const
{
    std::cout << i << std::endl;
}

int main()
{
    A a;
    a.show();
    a.set_i(123);
    a.show();
}
