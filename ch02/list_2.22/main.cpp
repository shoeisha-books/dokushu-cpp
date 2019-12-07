#include <iostream>

int main()
{
    int a = 0;

    auto lambda = [a]() mutable
    {
        a = 42; // OK。aは変更可能な状態でコピーキャプチャされる
        std::cout << "キャプチャした変数：" << a << std::endl;
    };

    lambda();

    // ラムダ式の内部で変更を加えても元の変数へ影響はない
    std::cout << "元の変数：" << a << std::endl;
}
