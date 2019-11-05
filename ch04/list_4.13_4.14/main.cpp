#include <iostream>

extern int value; // extern変数

void show_extern_variable(); // 他のファイルの関数の宣言

int main()
{
    std::cout << "main: extern変数のアドレス: " << &value << std::endl;
    std::cout << "main: extern変数の値: " << value << std::endl;

    value = 0;

    show_extern_variable();
}
