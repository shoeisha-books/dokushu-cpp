#include <vector>
#include <iostream>

void print_vector(const std::vector<int>& v)
{
    std::cout << "v.size(): " << v.size() << std::endl;

    for (int i : v)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}

int main()
{
    std::vector v = { 0, 1, 2, 3, 4 };
    print_vector(v);

    v.erase(v.begin() + 2);
    print_vector(v);

    v.erase(v.end() - 2, v.end());
    print_vector(v);

    v.clear();
    if (v.empty())
    {
        std::cout << "vは空です" << std::endl;
    }
}
