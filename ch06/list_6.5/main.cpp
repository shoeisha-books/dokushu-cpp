#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    Integer operator|(const Integer& rhs) const; // ビット和
    Integer operator&(const Integer& rhs) const; // ビット積
    Integer operator^(const Integer& rhs) const; // ビット排他的論理和

    Integer operator~() const; // ビット反転

    void show() const;
};

Integer Integer::operator|(const Integer& rhs) const
{
    return Integer{ value | rhs.value };
}

Integer Integer::operator&(const Integer& rhs) const
{
    return Integer{ value & rhs.value };
}

Integer Integer::operator^(const Integer& rhs) const
{
    return Integer{ value ^ rhs.value };
}

Integer Integer::operator~() const
{
    return Integer{ ~value };
}

void Integer::show() const
{
    std::cout << "Integer.value = " << value << std::endl;
}

int main()
{
    Integer x = 0b0011;
    Integer y = 0b1100;
    Integer z = 0b1001;

    auto v = ~(x ^ y) | (z & x);

    v.show();
}
