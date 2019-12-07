#include <new> // std::bad_array_new_length例外に必要
#include <iostream>

int main()
{
    try
    {
        int len = 5;
        int* array = new int[len] {0, 1, 2, 3, 4, 5}; // 6要素で初期化しようとする

        // …… // 何かの処理

        delete[] array;
    }
    // 実際に確保する動的配列の長さより初期化リストのほうが長かった場合の例外ハンドラー
    catch (std::bad_array_new_length & e)
    {
        std::cout << "動的配列の長さが足りません" << std::endl;
    }
    // メモリ割り当てが失敗した場合の例外ハンドラー
    catch (std::bad_alloc & e)
    {
        std::cout << "メモリ割り当てに失敗しました" << std::endl;
    }
}
