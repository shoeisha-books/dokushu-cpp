#include <iostream>

class Integer
{
    int value;

public:
    // 組み込みの整数型のように扱いたいのでexplicitは付けない
    Integer(int value) : value{ value } { }

    Integer add(const Integer& other) const; // 加算
    Integer sub(const Integer& other) const; // 減算
    Integer mul(const Integer& other) const; // 乗算
    Integer div(const Integer& other) const; // 除算

    void show() const;
};

Integer Integer::add(const Integer& other) const
{
    return Integer{ value + other.value };
}

Integer Integer::sub(const Integer& other) const
{
    return Integer{ value - other.value };
}

Integer Integer::mul(const Integer& other) const
{
    return Integer{ value * other.value };
}

Integer Integer::div(const Integer& other) const
{
    return Integer{ value / other.value };
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

    auto v = x.sub(y.div(y)).add(z.mul(x));
    
    v.show();
}
