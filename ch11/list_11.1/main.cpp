#include <iostream>
#include <typeinfo> // typeid演算子、std::type_infoに必要

int main()
{
    // typeid演算子が返す型は常にstd::type_infoへのconst参照

    const std::type_info& int_type = typeid(int); // int型に関する情報を取得
    const std::type_info& one_type = typeid(1); // 1に関する型情報を取得

    if (int_type == one_type) // 他の型情報と比較
    {
        std::cout << "1はint型です" << std::endl;
    }
    else
    {
        std::cout << "1はint型ではありません" << std::endl;
    }

    const std::type_info& str_type = typeid("hoge"); // 文字列"hoge"の型情報を取得
    if (int_type != str_type)
    {
        std::cout << "\"hoge\"はint型ではありません" << std::endl;
    }
    else
    {
        std::cout << "\"hoge\"はint型です" << std::endl;
    }
}
