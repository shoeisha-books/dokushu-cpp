#include <iostream>
#include <string>

int main()
{
    std::string str = "ushikamoshika";
    std::string sub = str.substr(4, 4);

    std::cout << "str.substr(4, 4): " << sub << std::endl;

    sub = str.substr(4);
    std::cout << "str.substr(4): " << sub << std::endl;
}
