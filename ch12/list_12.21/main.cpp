#include <iostream>
#include <list>
#include <iterator>

int main()
{
    std::list il0 = { 0, 1, 5, 6 };
    std::list il1 = { 2, 4, 6 };
    std::list il2 = { 3, 4 };

    auto iter = il0.begin();
    std::advance(iter, 2); // iterは5を指す

    il0.splice(iter, il1, il1.begin()); // il1の先頭要素をiterの直前に移動

    std::cout << "il0:" << std::endl;
    for (auto it = il0.begin(); it != il0.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    std::cout << "il1:" << std::endl;
    for (auto it = il1.begin(); it != il1.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
