#include <vector>
#include <iostream>

int main()
{
    std::vector<int> empty; // 空の動的配列
    std::cout << "empty.size(): " << empty.size() << std::endl;

    std::vector<int> array = { 10, 20, 30, 40, 50 }; // {}を使って初期化
    std::cout << "array.size(): " << array.size() << std::endl;

    // 範囲for文で走査もできる
    for (int e : array)
    {
        std::cout << e << std::endl;
    }
}
