#include <iostream>

int main()
{
    throw 0; // 誰もcatchしない例外

    // std::terminate()が呼ばれてプログラムが強制終了する
    // これ以降の処理は実行されない

    std::cout << "throwのあと" << std::endl;
}
