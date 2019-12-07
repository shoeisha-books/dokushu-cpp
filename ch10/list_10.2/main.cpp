#include <iostream>

void throw_zero()
{
    throw 0; // int型の例外オブジェクトを投げる
}

int main()
{
    try
    {
        throw_zero();
    }
    catch (float f) // int型のオブジェクトは捕まえられない
    {
        std::cout << "float型の例外オブジェクトを捕まえました 値 = "
            << f << std::endl;
    }
    catch (int i)
    {
        std::cout << "int型の例外オブジェクトを捕まえました 値 = " << i << std::endl;
    }
    catch (char c)
    {
        std::cout << "char型の例外オブジェクトを捕まえました 値 = "
            << static_cast<int>(c) << std::endl;
    }
    catch (int i) // int型のcatch節2つ目
    {
        std::cout << "2番目のint型のcatchで例外オブジェクトを捕まえました 値 = "
            << i << std::endl;
    }
}
