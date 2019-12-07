#include <iostream>
#include <string>

int main()
{
    // 2つの文字列を結合する：C++
    std::string strA = "Hello, ";
    std::string strB = "world.";

    std::string strC = strA + strB; // 結合
    std::cout << strC << std::endl;

    if (strC == "Hello, world.") // 比較
    {
        std::cout << "ok." << std::endl;
    }
    // 確保された領域は自動的に解放される
}
