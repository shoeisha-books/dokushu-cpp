#include <iostream>
#include <set>

int main()
{
    std::set is = { 1, 3, 5, 7 };
    auto first = is.begin();
    auto last = is.end();

    is.insert(8); // 8‚ğ‘}“ü
    is.erase(is.find(3)); // 3‚ğíœ

    while (first != last)
    {
        std::cout << *first << ' ';
        ++first;
    }
    std::cout << std::endl;
}
