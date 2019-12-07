#include <iostream>

int main()
{
    int array[10] = {};

    // 配列のサイズを要素の型で割ると配列の長さがわかる
    std::size_t length = sizeof(array) / sizeof(int);

    std::cout << "array[" << length << "]" << std::endl;
}
