#include <iostream>

// 引数がそれぞれ違ったテンプレートパラメーターを使っている
template <typename P, typename S, typename C, typename O>
auto lea(P ptr, S stride, C count, O offset)
{
    return ptr + stride * count + offset;
}

int main()
{
    int i = 0;

    // int*, int, int, intでそれぞれ推論される（戻り値の型はautoで推論され、int*となる）
    std::cout << lea(&i, 16, 4, 2) << std::endl;
}
