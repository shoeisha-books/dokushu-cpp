#include <iostream>

class Triangle
{
    float height;
    float width;

public:
    explicit Triangle(float height, float width);

    float area() const;
};

Triangle::Triangle(float height, float width)
    : height(height), width(width)
{
}

float Triangle::area() const
{
    return height * width / 2;
}

int main()
{
    // コンストラクターへの引数が複数の場合はカンマで区切る
    Triangle* tri = new Triangle{ 10.0f, 5.0f };

    std::cout << "三角形の面積: " << tri->area() << std::endl;

    delete tri; // クラスでもdelete演算子は通常のまま
}
