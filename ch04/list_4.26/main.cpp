#include <iostream>

#define HOGE

int main()
{
#if defined(HOGE)
    std::cout << "defined(HOGE)はtrueです。" << std::endl; // ①
#else
    std::cout << "defined(HOGE)はfalseです。" << std::endl; // ②
#endif
}
