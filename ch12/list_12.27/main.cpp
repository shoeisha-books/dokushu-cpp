#include <iostream>
#include <set>

int main()
{
    std::set is = { 3, 1, 0, 2, 4 };

    // 要素が昇順に並んでいるため挿入位置の指定は基本的に意味を持たない
    is.insert(is.end(), -1);

    // イテレーターを与えないinsert()も用意されている
    is.insert(-2);

    for (auto iter = is.begin(); iter != is.end(); ++iter)
    {
        std::cout << *iter << std::endl;
    }
}
