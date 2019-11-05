#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{ "BRA" }; // BRAを含む
    std::string input = "ABRACADABRA";

    if (std::regex_search(input, re))
    {
        std::cout << "マッチしました！ " << std::endl;
    }
}
