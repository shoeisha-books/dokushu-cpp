#include <iostream>

int main()
{
    int a = 0;

    auto lambda = [&a]() // aを参照でキャプチャする
    {
        std::cout << "キャプチャした変数：" << a << std::endl;
        ++a; // 参照でキャプチャした変数を変更する（mutableの指定は不要）
    };

    lambda();

    // ラムダ式の中で変更が加えられている
    std::cout << "元の変数：" << a << std::endl;

    a = 42; // キャプチャ元の変数を変更する

    // 参照でキャプチャしているので元の変数が変わればラムダ式の中で見える値も変わる
    lambda();
}
