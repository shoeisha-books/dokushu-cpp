#include <vector>
#include <iostream>

int main()
{
    std::vector<int> empty; // ‹ó‚Ì“®“I”z—ñ
    std::cout << "empty.size(): " << empty.size() << std::endl;

    std::vector<int> array = { 10, 20, 30, 40, 50 }; // {}‚ğg‚Á‚Ä‰Šú‰»
    std::cout << "array.size(): " << array.size() << std::endl;

    // ”ÍˆÍfor•¶‚Å‘–¸‚à‚Å‚«‚é
    for (int e : array)
    {
        std::cout << e << std::endl;
    }
}
