#include <string>

class A
{
    int m_v;
    std::string m_n;
public:
    A(int, std::string);
    A(float);
};

A::A(int v, std::string n)
    : m_v(v)
    , m_n{ n } // ① OK。メンバー初期化リストでも{}を使うことができる
{
}

A::A(float)
    : A{ -1, "float" } // ② OK。委譲コンストラクターでも{}を使うことができる
{
}

int main()
{
    A ap(42, "0"); // ③ 普通に()を使う
    A ab{ 42, "0" }; // ④ OK。()の代わりに{}を使うことができる
    
    A bp = A(42, "0"); // ⑤ OK。関数形式の明示的な型変換
    A bb = A{ 42, "0" }; // ⑥ OK。bpの初期化と同等
    
    A cp = (42, "0"); // ⑦ エラー。A(int, std::string)の呼び出しにはならない
    A cb = { 42, "0" }; // ⑧ OK。bbの初期化と同等
    
    A dp = (42, 0.0); // ⑨ 要注意。A(int, std::string)ではなくてA(float)が呼ばれる
    A db = { 42, 0.0 }; // ⑩ エラー。doubleからstd::stringへの変換はできない
    
    double pi = 3.1415926536;
    A ep(pi); // ⑪ OKだがdoubleからfloatへの暗黙変換が行われる
    A eb{ pi }; // ⑫ エラー。doubleからfloatへは安全に変換できない
}
