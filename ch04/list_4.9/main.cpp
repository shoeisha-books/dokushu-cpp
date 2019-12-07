#include <iostream>

int foo(int value)
{
    // 何か複雑な処理
    std::cout << "foo: " << value << std::endl;
    return value;
}

bool is_even(int value) // 偶数ならtrueを返す関数
{
    return value % 2 == 0;
}

bool is_zero(int value)
{
    return value == 0;
}

int main()
{
    // foo(42)の戻り値が0ではない偶数の場合に分岐させているが、
    // 複雑な処理をするfoo()関数が2回呼ばれてしまう
    if (is_even(foo(42)) && !is_zero(foo(42)))
    {
        std::cout << "foo(42)はゼロではない偶数を返しました" << std::endl;
    }
}
