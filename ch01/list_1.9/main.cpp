#include <iostream>

int main()
{
    int a = 2;
    switch (a + 1)
    {
    case 1:
        std::cout << "a + 1‚Í1‚Å‚·" << std::endl;
        break;
    case 2:
        std::cout << "a + 1‚Í2‚Å‚·" << std::endl;
        break;
    default:
        std::cout << "a + 1‚Í1‚Å‚à2‚Å‚à3‚Å‚à‚ ‚è‚Ü‚¹‚ñ" << std::endl;
        break;
    case 3:
        std::cout << "a + 1‚Í3‚Å‚·" << std::endl;
        break;
    }
}
