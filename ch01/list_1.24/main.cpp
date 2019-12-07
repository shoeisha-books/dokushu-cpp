#include <iostream>

int main()
{
    int i = 0; // ループカウンター。ループ（繰り返し）した回数を数える
    while (i < 5) // ループカウンターが5より小さい間処理を繰り返す
    {
        std::cout << "Hello, world" << std::endl;
        i += 1; // ループカウンターを1つ進める
    }
}
