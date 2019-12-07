#include <string>
#include <iostream>

int main()
{
    std::string str{ "Hello\0world", 11 };
    std::cout << str << std::endl; // Helloworld が出力される

    for (char ch : str) // Hello_world が出力される
    {
        std::cout << (ch == '\0' ? '_' : ch);
    }
    std::cout << std::endl;
}
