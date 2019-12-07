#include <iostream>

class product
{
    int id; // 商品ID

public:
    int get_id(); // 非constメンバー関数
    int get_id() const; // constメンバー関数
};

int product::get_id()
{
    std::cout << "非constメンバー関数のget_id()が呼ばれました。" << std::endl;
    return id;
}

int product::get_id() const
{
    std::cout << "constメンバー関数のget_id()が呼ばれました。" << std::endl;
    return id;
}

int main()
{
    product p;
    p.get_id(); // 非constメンバー関数が呼ばれる

    const product cp{};
    cp.get_id(); // constメンバー関数が呼ばれる
}
