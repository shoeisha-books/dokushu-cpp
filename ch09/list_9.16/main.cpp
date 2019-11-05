#include <iostream>

template <typename Type>
Type lea(Type ptr, Type stride, Type count, Type offset)
{
    return ptr + stride * count + offset;
}

int main()
{
    int i = 0;
    // 引数の型が1つだけ違う（先頭はint*で残りはint）ので、
    // コンパイラーがどちらの型をTypeにしたらよいか判断できずエラー
    std::cout << lea(&i, 16, 4, 2) << std::endl;
}
