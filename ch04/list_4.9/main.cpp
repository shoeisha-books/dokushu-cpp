#include <iostream>

int foo(int value)
{
    // ‰½‚©•¡G‚Èˆ—
    std::cout << "foo: " << value << std::endl;
    return value;
}

bool is_even(int value) // ‹ô”‚È‚çtrue‚ğ•Ô‚·ŠÖ”
{
    return value % 2 == 0;
}

bool is_zero(int value)
{
    return value == 0;
}

int main()
{
    // foo(42)‚Ì–ß‚è’l‚ª0‚Å‚Í‚È‚¢‹ô”‚Ìê‡‚É•ªŠò‚³‚¹‚Ä‚¢‚é‚ªA
    // •¡G‚Èˆ—‚ğ‚·‚éfoo()ŠÖ”‚ª2‰ñŒÄ‚Î‚ê‚Ä‚µ‚Ü‚¤
    if (is_even(foo(42)) && !is_zero(foo(42)))
    {
        std::cout << "foo(42)‚Íƒ[ƒ‚Å‚Í‚È‚¢‹ô”‚ğ•Ô‚µ‚Ü‚µ‚½" << std::endl;
    }
}
