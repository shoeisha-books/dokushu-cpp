#include <string>
#include <iostream>

int main()
{
    std::string integer = std::to_string(42);

    std::string floating_point = std::to_string(3.1415926);

    std::cout << integer << std::endl;

    std::cout << floating_point << std::endl;
}
