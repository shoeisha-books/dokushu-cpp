#include <iostream>
#include <list>
#include <iterator>

int main()
{
    std::list l = { 1, 5, 9, 13 };

    auto iter = l.begin();

    std::advance(iter, 1); // iterが1つ進む（5を指す）

    auto iter2 = std::prev(iter); // iter2は1を指す（iterはそのまま）
    std::cout << "*iter2: " << *iter2 << std::endl;

    auto iter3 = std::next(iter, 2); // iter3は13を指す（iterはそのまま）
    std::cout << "*iter3: " << *iter3 << std::endl;

    std::cout << "*iter: " << *iter << std::endl;
}
