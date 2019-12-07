#include <iostream>

enum class Category
{
    Value1, // 先頭は明示的に指定しない限り暗黙的に0
    Value2, // 値を省略した場合には1つ上の整数の次（これは1）
    Value3 = 100, // 1つ上の次の整数だと困る場合に明示的に指定できる
    Value4, // 再度省略した場合には1つ上の整数の次（これは101）
};

int main()
{
    // 列挙体の変数を宣言してValue3で初期化
    Category cat = Category::Value3;

    // 列挙体の値に対応した整数を得る
    std::cout << static_cast<int>(cat) << std::endl;
}
