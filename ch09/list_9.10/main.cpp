#include <iostream>

// データだけを持っている2次元ベクトルの構造体
struct vector2d
{
    int x;
    int y;
};

// getter / setterを経由する2次元ベクトルクラス
class Vec2
{
    int m_x;
    int m_y;

public:
    int getX() const { return m_x; }
    int getY() const { return m_y; }
    
    void setX(int x) { m_x = x; }
    void setY(int y) { m_y = y; }
};

// テンプレートの前方宣言
template <typename Vector>
void show_vector(Vector v);

// 2次元ベクトルクラスで明示的特殊化したテンプレート
// 前方宣言があればプライマリテンプレートがなくても特殊化はできる
template <>
void show_vector<Vec2>(Vec2 v)
{
    // Vec2が持つメンバー関数を経由して取得
    std::cout << "Vec2{x: " << v.getX() << ", y: " << v.getY() << "}"
        << std::endl;
}

// プライマリテンプレートは特殊化のあとでも定義できる
template <typename Vector>
void show_vector(Vector v)
{
    // プライマリテンプレートはxとyのメンバー変数に直接アクセスする前提
    std::cout << "{x: " << v.x << ", y: " << v.y << "}" << std::endl;
}

int main()
{
    vector2d st{ 10, 20 };

    show_vector<vector2d>(st); // プライマリテンプレートが選択される

    Vec2 cl;
    cl.setX(-20);
    cl.setY(-10);

    show_vector<Vec2>(cl); // 明示的特殊化したテンプレートが選択される
}
