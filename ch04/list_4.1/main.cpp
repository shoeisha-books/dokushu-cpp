#include <iostream>

int main()
{
    // このソースファイル名を出力
    std::cout << "__FILE__：" << __FILE__ << std::endl;

    // この行の行番号を出力
    std::cout << "__LINE__：" << __LINE__ << std::endl;

    // この関数の関数名を出力
    std::cout << "__func__：" << __func__ << std::endl;

    // 参照しているC++のバージョンを出力
    std::cout << "__cplusplus：" << __cplusplus << std::endl;

    int line = __LINE__; // 変数に現在の行番号を格納

    // lineは現在の行番号ではなく、変数に格納されたときの行番号が表示されることに注意
    std::cout << "line：" << line << ", __LINE__：" << __LINE__
        << std::endl;
}
