#include <iostream>

int main()
{
    int a = 0;

    float b = 3.14f; // 変数bはラムダ式の中で使われていないのでコピーされない

    auto lambda = [=]() // デフォルトのキャプチャ
    {
        // OK。aを使っているので、コンパイラーが自動的にaをコピーする
        std::cout << a << std::endl;
    };

    lambda();
}
