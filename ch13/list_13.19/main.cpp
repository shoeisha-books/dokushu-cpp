#include <regex>
#include <string>
#include <iostream>

int main()
{
    std::regex re{ "a.*e" }; // 正規表現：'a'で始まり'e'で終わる
    std::string input = "delicious applepie and banana";
    std::smatch match;

    // input中のreで示されたパターンにマッチする箇所を見つける
    // 結果はmatchに求められる
    if (std::regex_search(input, match, re))
    {
        std::cout << match.str() // マッチした文字列と
            << " pos = " << match.position() // その位置および
            << " len = " << match.length() // 長さ
            << std::endl;
    }
}
