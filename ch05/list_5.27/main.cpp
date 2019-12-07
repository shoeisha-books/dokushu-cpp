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
    // 関数リファレンスを宣言しidentityで初期化する
    int(&func)(int) = identity;

    // 関数リファレンスを経由してidentityを呼び出す
    std::cout << "func(4): " << func(4) << std::endl;

    // func = square; // エラー。関数リファレンスは参照先をあとから変更できない
}
