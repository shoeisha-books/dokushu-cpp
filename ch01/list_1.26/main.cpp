#include <iostream>

int main()
{
    int value[] = { -20, 10, 5, -40, 0, 10, -30 };

    // インデックス変数の宣言と、条件文と、進める処理を1カ所に記述できる
    for (int i = 0; i < 7; ++i)
    {
        if (value[i] < 0)
        {
            std::cout << "continue" << std::endl;
            continue; // この回のループはここで終わるが、必ずiは1進められる
        }
        if (value[i] == 0)
        {
            std::cout << "break" << std::endl;
            break; // whileのときと同じでこのループ処理全体を中断する
        }

        std::cout << "elem = " << value[i] << std::endl;
    }

    std::cout << "ループの終了" << std::endl;
}
