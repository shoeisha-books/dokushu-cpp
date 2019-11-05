#include <iostream>

class Integer
{
    int value;

public:
    // ‘g‚İ‚İ‚Ì®”Œ^‚Ì‚æ‚¤‚Éˆµ‚¢‚½‚¢‚Ì‚Åexplicit‚Í•t‚¯‚È‚¢
    Integer(int value) : value{ value } { }

    Integer add(const Integer& other) const; // ‰ÁZ
    Integer sub(const Integer& other) const; // Œ¸Z
    Integer mul(const Integer& other) const; // æZ
    Integer div(const Integer& other) const; // œZ

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
