#include <iostream>

int main()
{
    int array[] = { 0, 1, 2, 3 };

    std::cout << "先頭のアドレス: " << &array[0] << std::endl;

    int* ptr = array; // 配列からポインターへの暗黙変換

    std::cout << "ポインター: " << ptr << std::endl;
    std::cout << "値: " << *ptr << std::endl;
}
