#include <iostream>
#include <typeinfo> // std::bad_castに必要

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

    Base& rb = d; // Base型への参照にする

    // Base型への参照を使っているのでBase型のメンバー関数が呼ばれる
    std::cout << rb.get_class_name() << std::endl;

    try
    {
        Derived& rd = dynamic_cast<Derived&>(rb); // Base型からDerived型へキャスト
    
        // キャスト成功
        // 参照はDerived型なのでDerived型のメンバー関数が呼ばれる
        std::cout << rd.get_class_name() << std::endl;
    }
    catch (std::bad_cast & bc)
    {
        // キャスト失敗
        // 参照でのキャストに失敗した場合、dynamic_castはstd::bad_cast例外を投げる
        std::cout << "dynamic_cast失敗" << std::endl;
    }

    try
    {
        // 実際のインスタンスの型はDerived型なのでキャストは失敗する
        MoreDerived& rmd = dynamic_cast<MoreDerived&>(rb);
    
        std::cout << rmd.get_class_name() << std::endl;
    }
    catch (std::bad_cast & bc)
    {
        std::cout << "dynamic_cast失敗" << std::endl;
    }
}
