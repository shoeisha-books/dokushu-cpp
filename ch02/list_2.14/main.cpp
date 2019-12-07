#include <iostream>

int main()
{
    int i;
    std::cout << "数値を入力してください> "; // 改行しない

    std::cin >> i; // コンソールから数値を入力してもらい、それを変数iに格納する

    std::cout << "入力された数値は\"" << i << "\"です" << std::endl;
}
