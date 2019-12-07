#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v)
{
    for (int i : v)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector v = { 1, 5, 9 };

    v.insert(v.begin(), 0); // 先頭に0を挿入
    print_vector(v);

    v.insert(v.end(), 10); // 末尾に10を挿入
    print_vector(v);

    v.insert(v.begin() + 2, 2, 3); // 先頭から2番目（5）の手前に2個の3を挿入
    print_vector(v);

    int ia[] = { 6, 7, 8 };
    v.insert(v.end() - 2, ia, ia + 3); // イテレーターが指す範囲を挿入
    print_vector(v);
}
