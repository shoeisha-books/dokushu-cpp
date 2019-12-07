#include <iterator>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>

int main()
{
    std::vector v = { 10, -3, 2, -1, -5, 4, 2 };
    std::vector<int> c; // コピー先は空のままでよい

    // push_back()を使って順番にコピーしていく
    std::copy(v.begin(), v.end(), std::back_inserter(c));

    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    // std::vectorはpush_front()を持たないのでlistを使う
    std::list<int> l;

    // push_front()を使って順番にコピーしていく
    // コピーの度に先頭に挿入するので逆順になる
    std::copy(v.begin(), v.end(), std::front_inserter(l));

    for (auto e : l)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;

    c = { 0, 0 };

    // insert()を使って真ん中に順番に挿入していく
    std::copy(v.begin(), v.end(), std::inserter(c, c.begin() + 1));

    for (auto e : c)
    {
        std::cout << e << " ";
    }
    std::cout << std::endl;
}
