#include <iostream>
#include <vector>

int main()
{
    std::vector v0 = { 0, 2, 4, 6, 8 };
    std::vector<int> v1;

    v1.assign(v0.begin(), v0.end()); // v0‚Ìæ“ª‚©‚ç––”ö

    v0.assign(10, -1); // 10ŒÂ‚Ì-1

    v1.assign({ 1, 3, 5, 7, 9 }); // std::initializer_list<int>

    std::cout << "v0:" << std::endl;
    for (int i : v0)
    {
        std::cout << " " << i << std::endl;
    }

    std::cout << "v1:" << std::endl;
    for (int i : v1)
    {
        std::cout << " " << i << std::endl;
    }
}
