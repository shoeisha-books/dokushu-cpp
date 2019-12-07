#include <new> // std::bad_alloc例外に必要
#include <iostream>

int main()
{
    try
    {
        int* ptr = new int;
        
        // …… // 何かの処理;

        delete ptr;
    }
    // メモリ割り当てが失敗した場合の例外ハンドラー
    catch (std::bad_alloc & e)
    {
        std::cout << "メモリ割り当てに失敗しました" << std::endl;
    }
}
