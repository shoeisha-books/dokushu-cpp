#include <iostream>
#include <vector>

int main()
{
    std::vector iv0 = { 1, 2, 3, 4, 5 }; // コピー元
    std::vector iv1 = iv0; // コピー

    for (int i : iv1)
    {
        std::cout << i << std::endl;
    }
}
