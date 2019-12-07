#include <iostream>

// この関数から例外が飛んで来ることはない
void no_throw_exception() noexcept
{
    try
    {
        throw 0;
    }
    catch (...)
    {
        // noexcept指定した関数でも、内部でちゃんと捕まえていれば問題ない
        std::cout << "例外を捕まえました" << std::endl;
    }
}

int main()
{
    // この関数から例外が飛んで来ることはない
    no_throw_exception();
}
