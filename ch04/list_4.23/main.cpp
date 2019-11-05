#include <iostream>

void hello()
{
    std::cout << "hello, world" << std::endl;
}

void goodbye()
{
    std::cout << "goodbye, world" << std::endl;
}

int main()
{
    hello(); // マクロが定義される前は何も置き換わらない

    std::cout << "hello, macro" << std::endl;

#define hello goodbye // helloをgoodbyeに置き換えるマクロ

    hello(); // マクロがhelloをgoodbyeに置き換える

    // 文字列の中に現れるのは識別子ではないのでマクロで置き換わらない
    std::cout << "hello, macro" << std::endl;
}
