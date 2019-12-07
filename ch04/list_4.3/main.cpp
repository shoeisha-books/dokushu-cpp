#include <iostream>

class A
{
public:
    ~A();
};

A::~A()
{
    std::cout << "デストラクター呼び出し" << std::endl;
}

void function_scope(int i)
{
    A a; // 関数スコープから抜けるとデストラクターが呼ばれる
    std::cout << "関数スコープ" << std::endl;
    
    if (i > 0)
    {
        return; // 関数の処理がここから呼び出し元に移る
    }
    
    std::cout << "if文のあと" << std::endl;
}

int main()
{
    // if文の条件がtrueとなるのでreturn文で戻ってくる
    function_scope(10);

    std::cout << std::endl;

    // if文の条件がfalseとなるので関数スコープの終わりにたどり着く
    function_scope(-10);
}
