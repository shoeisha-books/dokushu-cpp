#include <iostream>
class Triangle
{
    int m_height; // 高さ
    int m_base_length; // 底辺の長さ

public:
    explicit Triangle(int height, int base_length);
    int height() const;
    int base_length() const;
};

Triangle::Triangle(int height, int base_length)
    : m_height(height), m_base_length(base_length)
{
}

int Triangle::height() const
{
    return m_height;
}

int Triangle::base_length() const
{
    return m_base_length;
}

int main()
{
    Triangle triangles[] =
    {
        Triangle{10, 20}, // 配列の各要素のコンストラクターにそれぞれ引数を渡している
        Triangle{20, 30},
        Triangle{40, 50},
    };

    for (auto& tri : triangles)
    {
        std::cout << "面積: " << (tri.base_length() * tri.height() / 2)
            << std::endl;
    }
}