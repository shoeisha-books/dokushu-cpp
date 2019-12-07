#include <iostream>

int main()
{
    int array[] = { 0, 1, 2, 3 };

    int* ptr = array;

    std::cout << ptr[0] << std::endl;
    std::cout << ptr[1] << std::endl;
    std::cout << ptr[2] << std::endl;
    std::cout << ptr[3] << std::endl;
}
