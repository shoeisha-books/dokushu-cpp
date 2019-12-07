#include <iostream>
// A, B, Cがそれぞれ違う型だった場合、計算結果の型は簡単にはわからない
// 戻り値の型にautoと指定すれば戻り値の型をreturn文から推論する
template <typename A, typename B, typename C>
auto fused_multiply_add(A a, B b, C c)
{
    return a * b + c;
}

int main()
{
    // 受け取った引数をもとに計算して適切な型で返す
    // （この場合、式中における暗黙の型変換規則によりdoubleで返される）
    std::cout << fused_multiply_add<double, int, float>(1.23456, 2, 1.23456f)
        << std::endl;
}
