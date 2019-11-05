#include <iostream>

class A
{
    int m_v;

public:
    A(int);

    int v() const;
};

A::A(int v) : m_v(v)
{
}

int A::v() const
{
    return m_v;
}

int main()
{
    A x = 42; // A::A(int)‚ğŒÄ‚Ño‚µ‚Ä‚¢‚é
    if (x.v() == 42)
    {
        std::cout << "A.v()‚Í42‚Å‚·" << std::endl;
    }
    else
    {
        std::cout << "A.v()‚Í42‚Å‚Í‚ ‚è‚Ü‚¹‚ñ" << std::endl;
    }
}
