class A
{
public:
    operator int() const { return 0; }
};

class B
{
public:
    // explicit指定されたintへの変換関数
    explicit operator int() const { return 0; }
};

int main()
{
    A a;
    int ia = a; // OK。変換関数はexplicit指定されていない
    char ca = a; // OK。intに暗黙変換されたあと、charに代入される

    B b;
    int ib = b; // エラー。変換関数がexplicit指定されているので、
                // Bからintへの暗黙変換は行われない

    char cb = b; // エラー。intへの暗黙変換が禁止されているのでcharへも代入できない
    
    int j(b); // OK。変数jは変換関数の戻り値で初期化される
    int k = static_cast<int>(b); // OK。明示的にキャストした場合は変換関数が呼ばれる
}