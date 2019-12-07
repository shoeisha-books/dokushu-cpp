#include <iostream>

int main()
{
    int* ptr = nullptr;

    if (ptr == nullptr)
    {
        std::cout << "ptrはヌルポインターです" << std::endl;
    }
    else
    {
        *ptr = 42;
    }
}
