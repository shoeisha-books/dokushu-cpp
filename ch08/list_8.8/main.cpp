#include <fstream>
#include <iostream>

int main()
{
    // 読み込みのみのファイルを書き込みでオープンしようとしている
    std::ofstream of{ "readonly.txt" };

    if (of.is_open()) // ファイルオブジェクトが実際にオープンできたのかを確かめる
    {
        std::cout << "オープン成功" << std::endl;
    }
    else
    {
        std::cout << "オープン失敗" << std::endl;
    }
}
