#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector v = { 10, -3, 2, 0, -1, -5, 4, 2 };
    std::vector<int> c(v.size()); // あらかじめ領域を確保

                                  // 無条件に先頭からコピー
    std::copy(v.begin(), v.end(), c.begin());
    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    // 正数のみ後ろから順番にコピー
    auto last = std::copy_if(v.rbegin(), v.rend(), c.begin(),
        [](int i) { return 0 < i; });
    
    // 返されたイテレーターの手前までにしか有効なデータは入っていないので、
    // それ以後は削除する
    c.erase(last, c.end());
    
    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}
