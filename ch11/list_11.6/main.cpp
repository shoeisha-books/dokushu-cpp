#include <iostream>

class Base
{
public:
    virtual ~Base() {} // 仮想デストラクターを定義してポリモーフィックにする

                       // virtualではないメンバー関数
    const char* get_class_name() const { return "Base"; }
};

class Derived : public Base
{
public:
    const char* get_class_name() const { return "Derived"; }
};

class MoreDerived : public Derived
{
public:
    const char* get_class_name() const { return "MoreDerived"; }
};

int main()
{
    Derived d; // 実際のオブジェクトはDerived型

    Base* pb = &d; // Base型へのポインターにする

                   // Base型へのポインターを使っているのでBase型のメンバー関数が呼ばれる
    std::cout << pb->get_class_name() << std::endl;

    Derived* pd = dynamic_cast<Derived*>(pb); // Base型からDerived型へキャスト

    if (pd)
    {
        // キャスト成功
        // ポインターはDerived型なのでDerived型のメンバー関数が呼ばれる
        std::cout << pd->get_class_name() << std::endl;
    }
    else
    {
        // キャスト失敗
        // ポインターでのキャストに失敗した場合、dynamic_castはnullptrを返す
        std::cout << "dynamic_cast失敗" << std::endl;
    }

    // 実際のインスタンスの型はDerived型なのでキャストは失敗する
    MoreDerived* pmd = dynamic_cast<MoreDerived*>(pb);

    if (pmd)
    {
        std::cout << pmd->get_class_name() << std::endl;
    }
    else
    {
        std::cout << "dynamic_cast失敗" << std::endl;
    }
}
