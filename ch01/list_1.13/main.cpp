#include <iostream>

int main()
{
    int* ptr = 0; // ヌルポインターで初期化

    std::cout << ptr << std::endl; // ポインター変数が持っているアドレスを表示する

    ptr = nullptr; // ヌルポインターリテラルを代入

    std::cout << ptr << std::endl;
}
