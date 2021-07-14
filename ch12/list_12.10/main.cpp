#include <iostream>
#include <vector>

int main()
{
    std::vector v = { 0, 1, 2, 3, 4 };

    // コンテナ内の全要素に対し、偶数なら2で割る
    for (auto iter = v.begin(); iter != v.end(); ++iter)
    {
        if (*iter % 2 == 0)
        {
            *iter /= 2;
        }
    }

    for (int i : v)
    {
        std::cout << i << std::endl;
    }
}
