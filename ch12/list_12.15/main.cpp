#include <iostream>
#include <vector>

int main()
{
    std::vector v = { 0, 1, 2, 3, 4 };

    v.clear(); // 全削除

    for (int i : v)
    {
        std::cout << i << std::endl;
    }
}
