#include <iostream>

int main()
{
    const char* message = "Hello, C-style cast";

    // OK。C形式キャストはconst修飾子を無視したキャストができる
    void* ptr = (void*)message;

    std::cout << (char*)ptr << std::endl;
}
