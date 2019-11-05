#include <iostream>

#define PLUS(a, b) (a + b) // 加算をする関数形式マクロ
#define HOGE

int main()
{
#if PLUS(defined(HOGE), 0)
    std::cout << "PLUS(defined(HOGE), 0)はtrueです。" << std::endl; // ①
#else
    std::cout << "PLUS(defined(HOGE), 0)はfalseです。" << std::endl; // ②
#endif
}
