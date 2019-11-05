#include <iostream>

template <typename Type>
Type fused_multiply_add(Type a, Type b, Type c)
{
    return a * b + c;
}

int main()
{
    // 引数からTypeをintと推論して呼び出し
    std::cout << fused_multiply_add(1, 2, 3) << std::endl;

    // 引数からTypeをfloatと推論して呼び出し
    std::cout << fused_multiply_add(1.23456f, 1.23456f, 1.23456f) << std::endl;

    // 引数からTypeをdoubleと推論して呼び出し
    std::cout << fused_multiply_add(1.23456, 1.23456, 1.23456) << std::endl;
}
