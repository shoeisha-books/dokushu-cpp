#include <iostream>

// メンバー変数を3つ持った共用体
union U
{
    int a;
    int b;
    int c;
};

int main()
{
    U u;

    std::cout << "u.aのアドレスは " << &u.a << std::endl;
    std::cout << "u.bのアドレスは " << &u.b << std::endl;
    std::cout << "u.cのアドレスは " << &u.c << std::endl;
}
