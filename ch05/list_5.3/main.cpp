#include <iostream>

int main()
{
    int array[] = { 0, 1, 2, 3 };

    int* ptr = array;

    ptr += 2; // 2番目の要素のアドレス
    std::cout << *ptr << std::endl;

    ++ptr; // 3番目の要素のアドレス
    std::cout << *ptr << std::endl;

    ptr -= 2; // 1番目の要素のアドレス
    std::cout << *ptr << std::endl;

    --ptr; // 0番目の要素のアドレス
    std::cout << *ptr << std::endl;
}
