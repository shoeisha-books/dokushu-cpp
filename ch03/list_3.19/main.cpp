#include <iostream>

union U
{
    // デフォルトのアクセス指定はpublic
    float f;

private:
    int i;

public:
    U(); // コンストラクターやデストラクターも定義できる
    int get_i() const;
};

// コンストラクターでは先頭以外のメンバー変数で初期化できる
U::U() : i(0xdeadbeef)
{
    // メンバーのアドレスを列挙
    std::cout << "&f: " << &f << std::endl
        << "&i: " << &i << std::endl;
}

int U::get_i() const
{
    return this->i; // 共用体のメンバー関数もthisが使える
}

int main()
{
    U u; // デフォルトコンストラクターがint型で初期化する
    std::cout << std::hex << u.get_i() << std::endl;
    u.f = 2.71828f; // float型の値を代入する
    std::cout << std::hex << u.get_i() << std::endl;
}
