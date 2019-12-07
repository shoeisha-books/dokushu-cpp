#include <iostream>

class Base
{
public:
    ~Base()
    {
        std::cout << "Base::~Base()" << std::endl;
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        std::cout << "Derived::~Derived()" << std::endl;
    }
};

Base* allocate()
{
    // 派生クラスを動的確保するが、
    // 関数の戻り値の型が基底クラスへのポインターになっているので
    // 暗黙変換によって基底クラスへのポインターが返される
    return new Derived{};
}

int main()
{
    auto ptr = allocate(); // 基底クラスへのポインターが返される
    delete ptr; // 注意。コンパイルできるが問題があるコード
}
