#include <iostream>

// 戻り値を推論ではなく、テンプレート引数で指定した型で返すようにしたテンプレート
template <typename R, typename A, typename B, typename C>
R fused_multiply_add(A a, B b, C c)
{
    return static_cast<R>(a * b + c);
}

int main()
{
    // 計算結果はfloat型で返してほしいが、
    // 先頭の引数は内部的にはdouble型で計算してほしいため
    // それだけ指定し、あとはコンパイラーに推論させる
    std::cout << fused_multiply_add<float, double>(1.23456f, 2, 3)
        << std::endl;
}
