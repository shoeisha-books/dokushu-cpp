#include <iostream>
#include <string>

int main()
{
    std::string s0;

    s0.assign("Hello"); // C文字列
    std::cout << "s0: " << s0 << std::endl;

    s0.assign("Hello", 4); // C文字列と長さ
    std::cout << "s0: " << s0 << std::endl;

    std::string s1 = "Hello";
    s0.assign(s1); // std::string
    std::cout << "s0: " << s0 << std::endl;

    s0.assign(3, '?'); // 任意の数のchar
    std::cout << "s0: " << s0 << std::endl;

    // std::initializer_list<char>
    s0.assign({ 'a', 'b', 'c' });
    std::cout << "s0: " << s0 << std::endl;

    s0.assign(s1.begin() + 1, s1.end() - 1); // イテレーター組
    std::cout << "s0: " << s0 << std::endl;

    s0.assign(s1, 1, 3); // 文字列と開始位置と長さ
    std::cout << "s0: " << s0 << std::endl;
}
