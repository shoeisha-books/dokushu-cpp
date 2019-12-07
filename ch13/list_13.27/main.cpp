#include <string>
#include <iostream>
#include <regex>

int main()
{
    std::regex re{ "(.)もも" };

    std::string input = "すもももももももものうち";
    std::string fmt = "$1うどん";
    std::string output;

    // 置換
    std::regex_replace(std::back_inserter(output), // 出力先
        input.begin(), // 入力の先頭
        input.end(), // 入力の末尾
        re, // 正規表現
        fmt); // 置換フォーマット

    std::cout << output << std::endl;
}
