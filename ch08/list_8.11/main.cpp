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
        // eofがtrueにならなかったら入力できている
        std::cout << "1文字入力 (in.get(c)) : " << c << std::endl;
    }
    else
    {
        std::cout << "EOF (in.get(c))" << std::endl;
    }

    int ci = in.get();
    if (ci != EOF)
    {
        // ciがEOFでないなら有効な文字を入力できた
        std::cout << "1文字入力 (in.get()) : "
            << static_cast<char>(ci) << std::endl;
    }
    else
    {
        std::cout << "EOF (in.get())" << std::endl;
    }
}
