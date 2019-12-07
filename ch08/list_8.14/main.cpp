#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in{ "hello_error.txt" };

    while (in.good())
    {
        in.get();
        auto state = in.rdstate();
        if (state & std::ios::eofbit)
        {
            std::cout << "EOFに到達しました" << std::endl;
        }
        else if (state & std::ios::failbit)
        {
            std::cout << "致命的ではないエラーが見つかりました" << std::endl;
        }
        else if (state & std::ios::badbit)
        {
            std::cout << "致命的なエラーが見つかりました" << std::endl;
        }
    }
}
