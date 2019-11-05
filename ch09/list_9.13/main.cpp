#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{ 10, 20, 30 };

    // ネストした型はとても長ったらしくて、しかもミスしてしまうかもしれない
    // std::vector<T>::referenceはT&を表すネストした型名である
    // エラー。型を間違えてしまった（昔はvはstd::vector<float>だったのかもしれない
    std::vector<float>::reference r = v[0];

    // 添え字を使ってアクセスしているため
    // 型を書かなくても要素への参照を取得しているだろうと考えられる
    // 添字演算子を使っているから要素への参照を取得しているはずだ、とわかるので
    // autoを使っても型の予想がついて読むときに齟齬があまり生まれない
    const auto& cr = v[0];
}
