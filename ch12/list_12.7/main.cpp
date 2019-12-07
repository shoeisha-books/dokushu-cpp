#include <iostream>
#include <vector>

int main()
{
    std::vector iv = { 1, 2, 3, 4, 5 };

    iv.resize(4); // 切り詰める方向にリサイズ

    std::cout << "size() = " << iv.size() << std::endl;

    iv.resize(6, -1); // 伸ばす。新しく増えた部分は-1で初期化される

    std::cout << "size() = " << iv.size() << std::endl;

    for (int i : iv)
    {
        std::cout << i << std::endl;
    }
}