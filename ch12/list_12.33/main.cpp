#include <iostream>

// predicateがtrueを返した要素のみをコンソールに出力する関数
template <typename P>
void filtered_show(int(&array)[5], P predicate)
{
    for (int e : array)
    {
        if (predicate(e))
        {
            std::cout << e << std::endl;
        }
    }
}

// 5より小さいならtrueを返す関数オブジェクト
class is_less_than_5
{
public:
    bool operator()(int v) const
    {
        return v < 5;
    }
};

int main()
{
    int array[] = { 5, 10, 3, 0, 1 };

    // ラムダ式を渡す
    filtered_show(array, [](int v) { return (v % 2) == 1; });

    std::cout << std::endl;

    // 自分で定義した関数オブジェクトも渡すことができる
    filtered_show(array, is_less_than_5{});
}
