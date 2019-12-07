#include <iostream>
#include <string>

int main()
{
    std::string s;

    std::cout << "文字列を入力してください> ";

    std::getline(std::cin, s); // 1行全体の入力

    std::cout << "入力された文字列は\"" << s << "\"です" << std::endl;
}
