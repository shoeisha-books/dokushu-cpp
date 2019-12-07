#include <map>
#include <iostream>

int main()
{
    std::map<std::string, float> w; // 相対原子質量
    w["H"] = 1.00f; // 水素
    w["O"] = 15.99f; // 酸素
    w["Cl"] = 34.97f; // 塩素
    w["?"];

    // ナトリウム、std::pairのテンプレートパラメーターは推論している
    w.insert(std::pair{ "Na", 22.99f });

    // 構造化束縛を使うとpairを使わずに直接要素を展開できる
    // for (const std::pair<const std::string, int>& item : w)
    for (const auto& [key, value] : w)
    {
        std::cout << key << ':' << value << std::endl;
    }

    // 水酸化ナトリウムの分子量
    std::cout << "NaOH = " << w["Na"] + w["O"] + w["H"] << std::endl;
}