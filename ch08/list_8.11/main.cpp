#include <iostream>
#include <fstream>

int main()
{
    std::ofstream out{ "hello_eof.txt" };

    out << "Hello, EOF" << std::endl;

    out.close();

    std::ifstream in{ "hello_eof.txt" };

    char c;
    if (!in.get(c).eof())
    {
        // eof‚ªtrue‚É‚È‚ç‚È‚©‚Á‚½‚ç“ü—Í‚Å‚«‚Ä‚¢‚é
        std::cout << "1•¶Žš“ü—Í (in.get(c)) : " << c << std::endl;
    }
    else
    {
        std::cout << "EOF (in.get(c))" << std::endl;
    }

    int ci = in.get();
    if (ci != EOF)
    {
        // ci‚ªEOF‚Å‚È‚¢‚È‚ç—LŒø‚È•¶Žš‚ð“ü—Í‚Å‚«‚½
        std::cout << "1•¶Žš“ü—Í (in.get()) : "
            << static_cast<char>(ci) << std::endl;
    }
    else
    {
        std::cout << "EOF (in.get())" << std::endl;
    }
}
