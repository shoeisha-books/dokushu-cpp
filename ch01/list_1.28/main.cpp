#include <iostream>

int main()
{
    int value[] = { -20, 10, 5, -40, 0, 10, -30 };
    int i = 0;
    
    do
    {
        if (value[i] < 0)
        {
            std::cout << "continue" << std::endl;
            ++i; // 重要
            continue; // 条件文に飛ぶ
        }
    
        if (value[i] == 0)
        {
            std::cout << "break" << std::endl;
            break; // ループを終了する
        }
        
        std::cout << "elem = " << value[i] << std::endl;
        ++i; // 配列のインデックスを1つ進める
    } while (i < 7);

    std::cout << "ループの終了" << std::endl;
}
