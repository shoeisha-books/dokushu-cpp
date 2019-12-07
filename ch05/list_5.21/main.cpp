#include <iostream>

int main()
{
    int&& i = 0;
    int&& j = 0; // 0からもう一つ右辺値参照を作る

    std::cout << "&i: " << &i << std::endl;
    std::cout << "&j: " << &j << std::endl;
}
