#include <iostream>

struct product
{
    int id;
    int price;
    int stock;
};

// 引数として構造体変数を受け取る関数
void show_product(product product)
{
    std::cout << "商品ID：" << product.id << std::endl;
    std::cout << "単価：" << product.price << std::endl;
    std::cout << "在庫数：" << product.stock << std::endl;
}

int main()
{
    product pen =
    {
        0, // 商品ID
        100, // 単価
        200, // 在庫数
    };

    show_product(pen); // 通常の変数と同じように関数に渡す
}
