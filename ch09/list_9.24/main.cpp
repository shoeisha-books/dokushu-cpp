#include <iostream>

// 左辺値を受け取るテンプレート
template <typename T>
void foo(T& value)
{
    std::cout << "void foo(T& value)" << std::endl;
}

// 右辺値を受け取るテンプレート
template <typename T>
void foo(T&& value)
{
    std::cout << "void foo(T&& value)" << std::endl;
}

int main()
{
    int i = 0;

    foo(i);

    foo(0);
}
