#include <iostream>

// 受け取った参照をそのまま返す関数
int& id(int& i)
{
    return i;
}

int main()
{
    int i = 42;

    auto& j = id(i); // 参照に型推論

    j = 0; // 参照なのでiが変わる

    std::cout << i << std::endl;
}
