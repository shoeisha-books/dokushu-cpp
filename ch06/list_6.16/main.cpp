#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    Integer& operator+=(const Integer& rhs); // 加算
    Integer& operator-=(const Integer& rhs); // 減算
    Integer& operator*=(const Integer& rhs); // 乗算
    Integer& operator/=(const Integer& rhs); // 除算

    void show() const;
};

Integer& Integer::operator+=(const Integer& rhs)
{
    value += rhs.value;
    return *this;
}

Integer& Integer::operator-=(const Integer& rhs)
{
    value -= rhs.value;
    return *this;
}

Integer& Integer::operator*=(const Integer& rhs)
{
    value *= rhs.value;
    return *this;
}

Integer& Integer::operator/=(const Integer& rhs)
{
    value /= rhs.value;
    return *this;
}

void Integer::show() const
{
    std::cout << "Integer.value = " << value << std::endl;
}

int main()
{
    Integer x = 10;
    Integer y = 3;
    Integer z = 7;

    z *= x;
    y /= y;
    x -= y;
    x += z;

    x.show();
}
