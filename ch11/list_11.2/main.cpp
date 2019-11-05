#include <iostream>
#include <typeinfo>

class Base
{
};

// Œp³ŠÖŒW
class Derived : public Base
{
};

// •ïŠÜŠÖŒW
class Composed
{
    Base base;
};

int main()
{
    // Œp³ŠÖŒW‚ª‚ ‚Á‚Ä‚à•Ê‚ÌŒ^‚Æ‚µ‚Äˆµ‚í‚ê‚é
    if (typeid(Base) == typeid(Derived))
    {
        std::cout << "Base‚ÆDerived‚Í“¯‚¶ƒNƒ‰ƒX‚Å‚·" << std::endl;
    }
    else
    {
        std::cout << "Base‚ÆDerived‚ÍˆÙ‚È‚éƒNƒ‰ƒX‚Å‚·" << std::endl;
    }

    // •ïŠÜŠÖŒW‚à‚â‚Í‚è•Ê‚ÌŒ^‚Æ‚µ‚Äˆµ‚í‚ê‚é
    if (typeid(Base) == typeid(Composed))
    {
        std::cout << "Base‚ÆComposed‚Í“¯‚¶ƒNƒ‰ƒX‚Å‚·" << std::endl;
    }
    else
    {
        std::cout << "Base‚ÆComposed‚ÍˆÙ‚È‚éƒNƒ‰ƒX‚Å‚·" << std::endl;
    }
}
