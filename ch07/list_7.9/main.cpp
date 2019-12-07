#include <iostream>

class Base
{
public:
    virtual ~Base()
    {
        std::cout << "Base::~Base()" << std::endl;
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "Derived::~Derived()" << std::endl;
    }
};

Base* allocate()
{
    return new Derived{};
}

int main()
{
    auto ptr = allocate();
    delete ptr;
}
