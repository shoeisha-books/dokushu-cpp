#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{ R"(A\w*A)" }; // Aで始まり、任意の数の英数字が続き、Aで終わる
    std::string input = "ABRACADABRA";

    if (std::regex_match(input, re))
    {
        std::cout << "マッチしました！ " << std::endl;
    }
}
