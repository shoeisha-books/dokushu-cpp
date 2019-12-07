#include <iostream>

class A
{
public:
    A* operator&(); // アドレス演算子
    const A* operator&() const;
};

A* A::operator&()
{
    std::cout << "this: " << this << std::endl;
    return this;
}

const A* A::operator&() const
{
    std::cout << "this(const): " << this << std::endl;
    return this;
}

int main()
{
    A a;

    A* pointer = &a;
}
