#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    Integer operator+(const Integer& rhs) const; // ‰ÁZ
    Integer operator-(const Integer& rhs) const; // Œ¸Z

    Integer operator+() const; // •„†‚ğ•Ï‚¦‚È‚¢
    Integer operator-() const; // •„†‚ğ”½“]‚·‚é

    void show() const;
};

Integer Integer::operator+(const Integer& rhs) const
{
    return Integer{ value + rhs.value };
}

Integer Integer::operator-(const Integer& rhs) const
{
    return Integer{ value - rhs.value };
}

Integer Integer::operator+() const
{
    return *this;
}

Integer Integer::operator-() const
{
    return Integer{ -value };
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

    auto v = x - -y + +z;

    v.show();
}
