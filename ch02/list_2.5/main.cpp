#include <iostream>

union U
{
    int a;
    int b;
    int c;
};

int main()
{
    U u = { 42 }; // 先頭のメンバーで初期化する

                  // u.aとu.bは同じ場所にあるのでu.bの値はu.aと同じになる
    std::cout << "u.bの値は " << u.b << std::endl;

    // u.cもu.aとu.bと同じ場所にあるので、
    // u.cを使って変更すると他のメンバー変数も変更される
    u.c = 1024;

    std::cout << "u.aの値は " << u.a << std::endl;
}
