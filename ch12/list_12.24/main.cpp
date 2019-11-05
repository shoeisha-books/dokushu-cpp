#include <tuple>
#include <iostream>

int main()
{
    std::tuple<int, std::string, char> isc{ 42, "tuple", 'c' };

    std::cout << std::get<0>(isc) << std::endl;
    std::cout << std::get<1>(isc) << std::endl;
    std::cout << std::get<2>(isc) << std::endl;
}
