#include <iostream>

void show_value(int a)
{
    std::cout << a << std::endl;
    return; // ここに到達した時点で呼び出し元に処理が戻る

    // return文で処理が戻っているためこの処理は呼ばれない
    std::cout << "show value" << std::endl;
}

int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int x = add(10, 20);
    show_value(x);
}
