#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s = "apple";

    // s‚Ìæ“ª‚©‚ç––”ö‚ğŒ³‚ÉAstd::vector‚ğ¶¬‚·‚é
    std::vector<char> cv{ s.begin(), s.end() };

    for (char c : cv)
    {
        std::cout << c << std::endl;
    }
}
