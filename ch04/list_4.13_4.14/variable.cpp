#include <iostream>

int value = 42; // 変数の実体の宣言、初期化はここでしかできない

void show_extern_variable()
{
    std::cout << "extern変数のアドレス: " << &value << std::endl;
    std::cout << "extern変数の値: " << value << std::endl;
}
