#include <iostream>

struct vector2d
{
    using value_type = float;

    float x;
    float y;
};

template <typename Vector>
typename Vector::value_type // typenameキーワードを使って
                            // 依存名が型であることをコンパイラーに教える
dot_product(const Vector& lhs, const Vector& rhs)
{
    return lhs.x * rhs.x + lhs.y * rhs.y;
}

int main()
{
    vector2d a{ 10, 20 };
    vector2d b{ 20, 30 };

    std::cout << dot_product<vector2d>(a, b) << std::endl;
}
