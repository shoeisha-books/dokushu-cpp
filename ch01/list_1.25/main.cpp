#include <iostream>

int main()
{
    int value[] = { -20, 10, 5, -40, 0, 10, -30 };

    int i = 0;
    while (i < 7)
    {
        // 配列の先頭から順番に表示していくが、負の値だったらスキップして、
        // 0だったらそこでループを終了する
        if (value[i] < 0)
        {
            std::cout << "continue" << std::endl;
            ++i; // 重要
            continue; // この回のループはここで終わり、条件式に飛ぶ
        }
        if (value[i] == 0)
        {
            std::cout << "break" << std::endl;
            break; // このループ処理を中断して、ループの次の処理に進む
        }

        std::cout << "elem = " << value[i] << std::endl;
        ++i; // 配列のインデックスを1つ進める
    }

    std::cout << "ループの終了" << std::endl;
}