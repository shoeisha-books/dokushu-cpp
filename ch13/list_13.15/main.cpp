#include <iostream>
#include <string>

int main()
{
    std::string s0 = "ushi";
    s0 += "mo";
    std::cout << "s0: " << s0 << std::endl;

    std::string s1 = "shika";
    s0.append(s1);
    std::cout << "s0: " << s0 << std::endl;

    s0.insert(4, "ka"); // 4文字目の前に挿入
    std::cout << "s0: " << s0 << std::endl;

    s0.erase(0, 4); // 0文字目以降4文字を削除
    std::cout << "s0: " << s0 << std::endl;

    s0.replace(4, 5, "me"); // 4文字目以降5文字を置換
    std::cout << "s0: " << s0 << std::endl;
}
