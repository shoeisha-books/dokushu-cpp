#include <iostream>

class product
{
    int id; // 商品ID

public:
    int get_id() const;
    void set_id(int new_id);
};

// getterはconstメンバー関数となっていたほうが都合がよい
int product::get_id() const
{
    return id;
}

// setterはconstメンバー関数にしない
void product::set_id(int new_id)
{
    id = new_id;
}

int main()
{
    const product cp{}; // この{}については5.5節で解説

    // OK。constメンバー関数はconstなインスタンスに対して呼び出せる
    std::cout << cp.get_id() << std::endl;
}
