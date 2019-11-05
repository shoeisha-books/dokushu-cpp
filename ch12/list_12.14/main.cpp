#include <iostream>
#include <vector>

int main()
{
    std::vector v = { 0, 1, 2, 3, 4 };

    auto it = v.begin() + 1; // æ“ª‚©‚ç2”Ô–Ú‚ğw‚·
    v.erase(it);

    for (int i : v)
    {
        std::cout << i << std::endl;
    }
}
