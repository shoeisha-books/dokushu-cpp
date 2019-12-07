#include <charconv>
#include <iostream>

int main()
{
    char buffer[16] = {};

    // 10進数の整数として文字列へ変換
    auto result = std::to_chars(buffer, buffer + 15, 10);
    *result.ptr = '\0'; // ヌル文字で終端
    std::cout << buffer << std::endl;

    int val = 0;
    // 10進数の整数として文字列から変換
    std::from_chars(buffer, buffer + 16, val);
    std::cout << val << std::endl;

    // 16進数の整数として文字列へ変換
    result = std::to_chars(buffer, buffer + 15, 0xdeadbeef, 16);
    *result.ptr = '\0'; // ヌル文字で終端
    std::cout << buffer << std::endl;

    // 16進数の整数として文字列から変換
    std::to_chars(buffer, buffer + 16, val, 16);
    std::cout << val << std::endl;

    // 科学技術表記の浮動小数点数として文字列に変換
    result = std::to_chars(buffer, buffer + 15, 3.14,
        std::chars_format::scientific);
    *result.ptr = '\0'; // ヌル文字で終端
    std::cout << buffer << std::endl;

    double fval = 0;
        // 自動でフォーマットを検出して文字列から変換
    std::from_chars(buffer, buffer + 16, fval);
    std::cout << val << std::endl;
}