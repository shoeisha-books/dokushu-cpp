#include <iostream>

class A
{
public:
    A()
    {
        // コンストラクターで例外を投げる
        throw 0;
    }
};

int main()
{
    try
    {
        // コンストラクターで投げられた例外はnew演算子を通して投げられる
        A* ptr = new A;

        // …… // 何かの処理

        delete ptr;
    }
    catch (int e)
    {
        // オブジェクトのために確保されていた領域は自動で解放されるため特別な処理は不要
        std::cout << "例外が投げられました 値 = " << e << std::endl;
    }
}
