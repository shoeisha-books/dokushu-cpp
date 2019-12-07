#include <iostream>

int main()
{
    int array[] = { 0, 1, 2, 3, 4 };

    // 型推論を使った範囲for文
    // 初期値の指定はしていないが、配列の要素の型に推論される（ここではint型）
    for (auto e : array)
    {
        std::cout << e << std::endl;
    }
}
