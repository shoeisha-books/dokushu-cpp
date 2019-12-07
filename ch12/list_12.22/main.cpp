#include <iostream>
#include <list>

void print_list(const std::list<int>& l)
{
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list il = { 2, 4, 6, 8, 2, 4, 6, 8 };

    il.sort(); // 昇順ソート
    print_list(il);

    // il.sort(f);
    // f(x, y)がtrueならxがyより先頭寄りにソートされる
    auto greater = [](int x, int y) {return x > y; };
    il.sort(greater);
    print_list(il);

    std::list il2 = { 1, 3, 5, 7 };
    il2.sort(greater);
    print_list(il2);

    il.merge(il2, greater); // 併合：il2は空になる
    print_list(il);
}
