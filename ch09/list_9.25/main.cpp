#include <iostream>
#include <utility> // std::move

void show_value_category(int& value)
{
    std::cout << "参照" << std::endl;
}

void show_value_category(int&& value)
{
    std::cout << "右辺値参照" << std::endl;
}

// フォワーディング参照の仮引数をそのまま渡す
template <typename T>
void direct(T&& value)
{
    show_value_category(value);
}

// フォワーディング参照の仮引数をstd::move()関数を通して渡す
template <typename T>
void move(T&& value)
{
    show_value_category(std::move(value));
}

int main()
{
    int i = 0;

    direct(i);
    direct(0);

    std::cout << std::endl;

    move(i);
    move(0);
}
