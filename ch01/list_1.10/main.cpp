#include <iostream>

int main()
{
    int a = 2;
    switch (a)
    {
    case 1: // FALL THROUGH !!
    case 2: // FALL THROUGH !!
    case 3:
        std::cout << "aは1か2か3です" << std::endl;
        return 0;
    }
    std::cout << "残りの処理" << std::endl;
}
