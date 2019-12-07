#include <iostream>
#include <string>

int main()
{
    // 文字列を10進数としてint型に変換
    std::cout << std::stoi("-10") << std::endl;

    // 文字列を16進数としてunsigned long型に変換
    std::cout << std::stoul("deadbeef", nullptr, 16) << std::endl;

    // 文字列から基数を判定してlong型に変換
    std::cout << std::stol("0755", nullptr, 0) << std::endl;

    // 文字列を浮動小数点数としてdouble型に変換
    std::cout << std::stod("3.1415926") << std::endl;

    std::size_t idx = 0;
    // 文字列を10進数としてint型に変換し、変換できなかった文字のインデックスをidxに格納
    int integer = std::stoi("42.195", &idx);

    std::cout << integer << "; idx = " << idx << std::endl;
}
