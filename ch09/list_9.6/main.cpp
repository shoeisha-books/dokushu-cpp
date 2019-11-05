// このソースはコンパイルできません

class Base
{
protected:
    // 仮想関数テーブル
    struct
    {
        // 仮想関数へのポインター
        vfunc - pointer foo_vfunc;
    } vtable;

public:
    // 仮想関数のBaseにおける本体
    void foo_body() { …… }
    void foo()
    {
        // 仮想関数を使った本体の呼び出し
        vtable.foo_vfunc();
    }
    Base()
    {
        vtable.foo_vfunc = &foo_body; // Base::foo_bodyへのアドレスを設定する
    }
};
class Derived : public Base
{
public:
    // 仮想関数のDerivedにおける本体
    void foo_body() { …… }
    Derived()
    {
        vtable.foo_vfunc = &foo_body; // Derived::foo_bodyへのアドレスで上書きする
    }
};
int main()
{
    Derived d;
    d.foo(); // 仮想関数呼び出し
}
