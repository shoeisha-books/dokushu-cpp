#include <iostream>

void show_value(int a)
{
    std::cout << a << std::endl;
}

// 3つの整数を受け取ってすべての和を返す関数sum()のオーバーロード
int sum(int a, int b, int c)
{
    return a + b + c;
}

// 2つの整数を受け取ってそれらの和を返す関数sum()
int sum(int a, int b)
{
    return sum(a, b, 0); // 3引数版のオーバーロードを呼び出す
}

int main()
{
    int x = sum(10, 20); // 2引数版のオーバーロードを呼び出す
    show_value(x);

    int y = sum(5, 15, 25); // 3引数版のオーバーロードを呼び出す
    show_value(y);
}
