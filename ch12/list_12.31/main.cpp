#include <set>
#include <iostream>
int main()
{
    std::multiset ims = { 1, 1, 2, 2 };

    ims.insert(5); // {1, 1, 2, 2, 5}
    ims.insert(2); // {1, 1, 2, 2, 2, 5}
    
    auto range = ims.equal_range(2);
    // equal_range(v)はvと等しい要素の範囲をstd::pairで返す
    for (auto iter = range.first; iter != range.second; ++iter)
    {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
    
    // 2を（すべて）削除し、削除された要素数を返す
    std::size_t erased = ims.erase(2);
    std::cout << "elements num:" << erased << std::endl;

    for (auto iter = ims.begin(); iter != ims.end(); ++iter)
    {
        std::cout << *iter << ' ';
    }
    std::cout << std::endl;
}
