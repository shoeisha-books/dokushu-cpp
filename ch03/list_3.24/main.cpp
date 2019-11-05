#include <iostream>

class S
{
    static int count; // インスタンスの数を数えるstaticメンバー変数

public:
    S();
    ~S();

    static void show_count(); // staticメンバー関数の宣言
};

int S::count = 0; // staticメンバー変数の実体を定義して0で初期化する

S::S()
{
    // インスタンスが作られたらインクリメントする
    ++count;
}

S::~S()
{
    // 破棄されたらデクリメントする
    --count;
}

void S::show_count()
{
    std::cout << "S::count: " << count << std::endl;
}

int main()
{
    // どのインスタンスにも結び付かないのでインスタンスがなくても呼ぶことができる
    S::show_count();

    S a;

    a.show_count(); // インスタンスを使って呼び出すこともできる
}
