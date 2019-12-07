#include <iostream>

int main()
{
    int array[10] = {};

    // 配列の要素を使えば、型が変更されても要素の型も同じく変更されるので
    // 正しく長さが計算できる
    std::size_t length = sizeof(array) / sizeof(array[0]);

    std::cout << "array[" << length << "]" << std::endl;
}
