#include <string>
#include <iostream>

int main()
{
    std::string str{ "Hello\0world", 11 };
    std::cout << str << std::endl; // Helloworld ‚ªo—Í‚³‚ê‚é

    for (char ch : str) // Hello_world ‚ªo—Í‚³‚ê‚é
    {
        std::cout << (ch == '\0' ? '_' : ch);
    }
    std::cout << std::endl;
}
