#include <iostream>
#include <vector>

int main()
{
    // std::initializer_list‚É‚æ‚é¶¬
    std::vector<int> iv = { 1, 2, 3, 4, 5 };

    for (int i : iv)
    {
        std::cout << i << std::endl;
    }
}
