#include <iostream>

int count()
{
    static int counter = 0;
    return ++counter;
}

int main()
{
    std::cout << "1‰ñ–Ú: " << count() << std::endl;

    std::cout << "2‰ñ–Ú: " << count() << std::endl;

    std::cout << "3‰ñ–Ú: " << count() << std::endl;
}
