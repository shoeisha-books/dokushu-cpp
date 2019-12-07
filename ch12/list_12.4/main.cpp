#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s = "apple";

    // sの先頭から末尾を元に、std::vectorを生成する
    std::vector<char> cv{ s.begin(), s.end() };

    for (char c : cv)
    {
        std::cout << c << std::endl;
    }
}
