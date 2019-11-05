#include <iostream>
#include <list>

void print_list(const std::list<int>& l)
{
    for (auto it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::list il = { 1, 2, 2 };
    print_list(il);

    il.pop_back();
    print_list(il);

    il.push_back(3);
    print_list(il);

    il.push_front(0);
    print_list(il);

    il.emplace_front(-1);
    print_list(il);

    il.pop_front();
    print_list(il);
}
