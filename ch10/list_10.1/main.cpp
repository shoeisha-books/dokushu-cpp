#include <iostream>
void throw_zero()
{
    std::cout << "例外を投げる前" << std::endl;

    // int型のオブジェクトを例外オブジェクトとして投げる
    // tryブロックがなくても例外を投げることはできる
    throw 0;

    std::cout << "例外を投げたあと" << std::endl;
}

int main()
{
    // tryブロックの中で投げられた例外はcatch節で捕まえるか、
    // さらにこの関数の呼び出し元が捕まえる
    try
    {
        std::cout << "関数呼び出し前" << std::endl;
        throw_zero(); // この関数の中で例外が投げられる
        std::cout << "関数呼び出し後" << std::endl;
    }
    catch (int e) // 例外オブジェクトをここで捕まえる
    {
        std::cout << "投げられた例外オブジェクトの値は " << e << " です"
            << std::endl;
    }
    std::cout << "捕まえたあと" << std::endl;
}
