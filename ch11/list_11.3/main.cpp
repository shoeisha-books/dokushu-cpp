#include <iostream>
#include <typeinfo>

class Base
{
public:
    virtual ~Base() { } // 仮想デストラクターを定義してポリモーフィックにする
};

class DerivedA : public Base
{
};

class DerivedB : public Base
{
};

// 渡されたオブジェクトの実際の型によってメッセージを変える
void determine_class(const Base& obj)
{
    const std::type_info& obj_type = typeid(obj);

    if (obj_type == typeid(DerivedA))
    {
        // 渡されたobjが実際にはDerivedA型だった場合
        std::cout << "obj は DerivedA型のインスタンスです" << std::endl;
    }
    else if (obj_type == typeid(DerivedB))
    {
        // 渡されたobjが実際にはDerivedB型だった場合
        std::cout << "obj は DerivedB型のインスタンスです" << std::endl;
    }
    else
    {
        std::cout << "obj は DerivedAでもDerivedBでもないインスタンスです"
            << std::endl;
    }
}

// determine_classが知らない派生クラス
class DerivedC : public Base
{
};

int main()
{
    DerivedA a;

    determine_class(a); // DerivedA型のオブジェクトを渡す

    DerivedB b;

    determine_class(b); // DerivedB型のオブジェクトを渡す

    DerivedC c;

    determine_class(c); // DerivedC型のオブジェクトを渡す
}
