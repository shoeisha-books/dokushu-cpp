#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector v = { 1, 2, 3, 2, 1 };

    auto c = std::count(v.begin(), v.end(), 2);
    std::cout << "v‚É2‚Í" << c << "‚Â‚ ‚è‚Ü‚·" << std::endl;

    c = std::count_if(v.begin(), v.end(), [](int v) { return v < 2; });
    std::cout << "v‚É‚Í2‚æ‚è¬‚³‚¢—v‘f‚Í" << c << "‚Â‚ ‚è‚Ü‚·" << std::endl;
}
