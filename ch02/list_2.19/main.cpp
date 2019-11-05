#include <iostream>

// 2次元ベクトルを表す構造体
struct vector2d
{
    int x;
    int y;
};

// 整数用のオーバーロード
int add(int left, int right)
{
    return left + right;
}

// 浮動小数点数用のオーバーロード
double add(double left, double right)
{
    return left + right;
}

// 2次元ベクトル用のオーバーロード
vector2d add(vector2d left, vector2d right)
{
    vector2d v;
    v.x = left.x + right.x;
    v.y = left.y + right.y;
    return v;
}

int main()
{
    int integer = add(1, 2); // 整数用のオーバーロードが呼ばれる
    std::cout << integer << std::endl;

    // 浮動小数点数用のオーバーロードが呼ばれる
    double floating = add(3.14, 42.195);
    std::cout << floating << std::endl;

    vector2d v = { 1, 2 };
    vector2d u = { -3, 4 };

    vector2d w = add(v, u); // 2次元ベクトル用のオーバーロードが呼ばれる
    std::cout << w.x << ", " << w.y << std::endl;
}
