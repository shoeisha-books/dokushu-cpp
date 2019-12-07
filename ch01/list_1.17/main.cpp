#include <iostream>

int main()
{
    char c = 99;

    // キャスト演算子を使ってint型に変換して表示
    std::cout << static_cast<int>(c) << std::endl;
}
