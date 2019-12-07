#include <iostream>

int identity(int v)
{
    return v;
}

int square(int v)
{
    return v * v;
}

int main()
{
    // 関数ポインターを宣言しidentityで初期化する
    int (*func)(int) = &identity;

    // 関数ポインターを経由してidentityを呼び出す
    std::cout << "func(4): " << func(4) << std::endl;

    // 関数ポインターにsquareのアドレスを代入する
    func = &square;

    // 関数ポインターを経由してsquareを呼び出す
    std::cout << "func(4): " << func(4) << std::endl;
}
