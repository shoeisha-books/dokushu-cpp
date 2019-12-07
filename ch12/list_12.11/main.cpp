#include <vector>
#include <iostream>

int main()
{
    std::vector v = { 0, 1, 2, 3, 4 };
    for (auto iter = v.rbegin(); iter != v.rend(); ++iter)
    {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
}
