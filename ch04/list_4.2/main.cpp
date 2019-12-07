#include <iostream>

std::string get_message(); // 関数の前方宣言

int main()
{
    auto msg = get_message(); // 定義がまだなくても関数呼び出しができる
    std::cout << msg << std::endl;
}

// 関数の実際の定義
std::string get_message()
{
    return "Hello, forward declaration";
}
