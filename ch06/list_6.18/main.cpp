#include <iostream>

class vector4d
{
    float x, y, z, w;

public:
    explicit vector4d(float x, float y, float z, float w)
        : x{ x }, y{ y }, z{ z }, w{ w } {}

    friend vector4d add(const vector4d& lhs, const vector4d& rhs);
};

vector4d add(const vector4d& lhs, const vector4d& rhs)
{
    vector4d ret
    {
        lhs.x + rhs.x,
        lhs.y + rhs.y,
        lhs.z + rhs.z,
        lhs.w + rhs.w
    };
    return ret;
}

class vector3d
{
    float x, y, z;

public:
    explicit vector3d(float x, float y, float z)
        : x{ x }, y{ y }, z{ z } {}
    
    // vector3dをvector4dに変換する変換関数
    operator vector4d() const;
};

vector3d::operator vector4d() const
{
    // 3次元ベクトルを対応する4次元ベクトルに変換する
    vector4d ret{ x, y, z, 0.0f };
    return ret;
}

int main()
{
    vector3d v1{ 1, 2, 3 }, v2{ 0, 1, 0 };
    
    vector4d a = v1; // vector3dをvector4dに変換する（①）

                     // OK。vector4dのフレンド関数が呼ばれる（②）
    vector4d b = add(v1, v2);
}
