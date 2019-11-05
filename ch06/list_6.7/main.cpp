#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    bool operator!() const; // ’P€‚Ì˜_—”Û’è‰‰Zq

    bool operator&&(const Integer& rhs) const;
    bool operator||(const Integer& rhs) const;
};

bool Integer::operator!() const
{
    return value != 0;
}

bool Integer::operator&&(const Integer& rhs) const
{
    return value && rhs.value;
}

bool Integer::operator||(const Integer& rhs) const
{
    return value || rhs.value;
}

int main()
{
    Integer x = 10;
    Integer y = 3;
    Integer z = 0;

    if (x && y)
    {
        std::cout << "x‚Æy‚Í‚Ç‚¿‚ç‚à0‚Å‚Í‚È‚¢" << std::endl;
    }
    if (z || x)
    {
        std::cout << "z‚Æx‚Ì­‚È‚­‚Æ‚à‚Ç‚¿‚ç‚©‚Í0‚Å‚Í‚È‚¢" << std::endl;
    }
    if (!z)
    {
        std::cout << "z‚Í0" << std::endl;
    }
}
