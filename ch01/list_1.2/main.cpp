#include <iostream>

// 何も引数を受け取らず、何も戻り値を返さない関数
void hello_world()
{
    std::cout << "Hello, world" << std::endl;
}

// aとbの2つを引数として受け取り、それらを足した結果を表示する関数
void show_sum(int a, int b)
{
    int c = a + b;
    std::cout << c << std::endl;
}

int main()
{
    hello_world(); // 引数を何も渡さずに関数を呼び出す
    show_sum(1, 2); // aに1を、bに2を渡して関数を呼び出す
}
