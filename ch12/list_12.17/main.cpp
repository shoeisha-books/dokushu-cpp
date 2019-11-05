#include <iostream>
#include <list>
#include <iterator> // std::advance()用

int main()
{
    // クラステンプレートの型推論を使って<T>を省略することもできる
    std::list<int> l = { 1, 5, 9 };

    l.insert(l.begin(), 0);
    l.insert(l.end(), 10);

    auto iter = l.begin();
    std::advance(iter, 2); // iterを2つ進める

    l.insert(iter, 2, 3);

    int ia[] = { 6, 7, 8 };
    std::advance(iter, -2); // 2つ戻る

    l.insert(iter, ia, ia + 3);

    for (auto it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}
