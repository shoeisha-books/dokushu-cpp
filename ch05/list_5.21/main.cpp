#include <iostream>

int main()
{
    int&& i = 0;
    int&& j = 0; // 0‚©‚ç‚à‚¤ˆê‚Â‰E•Ó’lQÆ‚ğì‚é

    std::cout << "&i: " << &i << std::endl;
    std::cout << "&j: " << &j << std::endl;
}
