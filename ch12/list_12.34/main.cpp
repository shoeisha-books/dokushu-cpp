#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector v = { 1, 2, 3 };

    auto iter = std::find(v.begin(), v.end(), 2);
    if (iter != v.end()) // Œ©‚Â‚©‚ç‚È‚¯‚ê‚Îv.end()‚ª•Ô‚Á‚Ä‚­‚é
    {
        std::cout << "*iter = " << *iter << std::endl;
    }

    iter = std::find_if(v.begin(), v.end(), [](int v) { return v == 3; });
    if (iter != v.end()) // ‚±‚¿‚ç‚à“¯—l
    {
        std::cout << "*iter = " << *iter << std::endl;
    }
}
