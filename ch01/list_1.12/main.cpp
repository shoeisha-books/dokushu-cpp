#include <iostream>

void nochange(int i)
{
    // 仮引数を変更するが、呼び出した変数自体は変更されない
    i = 42;
}

void set42(int* pi) // int型へのポインターを引数として受け取る
{
    // 引数で渡されたアドレスが指し示す変数に42を代入する
    *pi = 42;
}

int main()
{
    int i = 0; // iはこの時点では0

    nochange(i); // 変数iが持っている値だけを渡す

    // 変数i自体は変更されない
    std::cout << i << std::endl;

    set42(&i); // 変数iへのアドレスを渡している

    // set42がアドレスを使って変数iを変更しているので、iの値は42になっている
    std::cout << i << std::endl;
}
