#include <iostream>
#include <utility>

int main()
{
    std::pair<std::string, int> si{ "pair", 42 };

    std::cout << si.first << ", " << si.second << std::endl;
}
