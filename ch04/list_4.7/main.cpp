#include <iostream>

int count()
{
    static int counter = 0;
    return ++counter;
}

int main()
{
    std::cout << "1回目: " << count() << std::endl;

    std::cout << "2回目: " << count() << std::endl;

    std::cout << "3回目: " << count() << std::endl;
}
