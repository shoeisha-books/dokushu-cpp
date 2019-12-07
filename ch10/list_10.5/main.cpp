#include <iostream>

void show_message(const char* message)
{
    std::cout << message << std::endl;
    throw 0;
}

void echo_message()
{
    // 99文字まで入るバッファーを用意して標準入力からのメッセージを読み込む
    char* buffer = new char[100];

    std::cin.get(buffer, 100);

    try
    {
        // 例外が投げられるかもしれない処理
        show_message(buffer);
    }
    catch (...)
    {
        std::cout << "例外を捕まえました (echo_message)" << std::endl;
        delete[] buffer; // バッファーを解放する

        throw; // 例外の再送出
               // 具体的な例外オブジェクトについて知らなくても再送出できる
    }
    delete[] buffer;
}

int main()
{
    try
    {
        echo_message();
    }
    catch (int e)
    {
        std::cout << "int型の例外を捕まえました (main)" << std::endl;
    }
    catch (...)
    {
        std::cout << "例外を捕まえました (main)" << std::endl;
    }
}
