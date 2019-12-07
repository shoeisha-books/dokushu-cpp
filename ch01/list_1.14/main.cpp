#include <iostream>

int main()
{
    int* ptr = nullptr;

    *ptr = 42; // ヌル参照

    std::cout << "ヌル参照のあと" << std::endl;
}
