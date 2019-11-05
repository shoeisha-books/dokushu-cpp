#include <iostream>

int main()
{
    int a = 2;
    switch (a)
    {
    case 1: // FALL THROUGH !!
    case 2: // FALL THROUGH !!
    case 3:
        std::cout << "a‚Í1‚©2‚©3‚Å‚·" << std::endl;
        return 0;
    }
    std::cout << "Žc‚è‚Ìˆ—" << std::endl;
}
