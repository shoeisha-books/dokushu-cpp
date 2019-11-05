#include <vector>
#include <iostream>

int main()
{
    std::vector<int> list;

    list.push_back(42); // ––”ö‚É42‚ð’Ç‰Á
    list.push_back(0); // ––”ö‚É0‚ð’Ç‰Á

    for (int e : list)
    {
        std::cout << e << std::endl;
    }

    std::cout << std::endl;

    list.pop_back(); // ÅŒã‚Ì—v‘f‚ðíœ
    list.push_back(-10); // ––”ö‚É-10‚ð’Ç‰Á

    for (int e : list)
    {
        std::cout << e << std::endl;
    }
}
