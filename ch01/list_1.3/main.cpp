#include <iostream>

void show_value(int a)
{
    std::cout << a << std::endl;
    return; // ‚±‚±‚É“ž’B‚µ‚½Žž“_‚ÅŒÄ‚Ño‚µŒ³‚Éˆ—‚ª–ß‚é

    // return•¶‚Åˆ—‚ª–ß‚Á‚Ä‚¢‚é‚½‚ß‚±‚Ìˆ—‚ÍŒÄ‚Î‚ê‚È‚¢
    std::cout << "show value" << std::endl;
}

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int x = add(10, 20);
    show_value(x);
}
