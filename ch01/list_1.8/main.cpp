#include <iostream>

void show_message(int value)
{
    if (10 <= value && value < 20)
    {
        std::cout << "10以上20未満です" << std::endl;
    }
    else
    {
        std::cout << "10以上20未満ではありません" << std::endl;
    }
}

int main()
{
    show_message(9); // 10未満なのでelse文のメッセージが表示される
    show_message(15); // 10以上20未満なのでif文のメッセージが表示される
    show_message(20); // 20以上なのでelse文のメッセージが表示される
}
