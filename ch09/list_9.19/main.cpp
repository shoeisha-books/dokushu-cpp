#include <iostream>

template <typename A, typename B, typename C>
auto fused_multiply_add(A a, B b, C c)
{
    return a * b + c;
}

int main()
{
    // 2つ目のテンプレート引数（B）をfloat型にしたいが、
    // そのためにはAのテンプレート引数も指定しなければならない
    std::cout << fused_multiply_add<float, float>(1.23456f, 2, 3) << std::endl;

    // Aのテンプレート引数を推論させたいので、2つ目のテンプレート引数を指定ではなく、
    // 引数自体をキャストして推論させる
    std::cout << fused_multiply_add(1.23456f, static_cast<float>(2), 3)
        << std::endl;
}
