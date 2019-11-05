#include <iostream>
template <typename T>
class A
{
    T value;

public:
    explicit A(T value) : value{ value } { }
    
    T& get_value() { return value; }
};

// T���Q�ƌ^�ł����Ă��l���R�s�[�����N���XA��Ԃ��悤�ɂ���
template <typename T>
A<std::remove_const_t<std::remove_reference_t<T>>> make_A(T value)
{
    return A<std::remove_const_t<std::remove_reference_t<T>>>{value};;
}

int main()
{
    int i = 42;
    std::cout << &i << std::endl;
 
    A<int&> r{ i };
    
    std::cout << &r.get_value() << std::endl;
    
    // �����I�ɎQ�Ƃ��g���Ď��̉����Ă��A�^�����e���v���[�g�ɂ���Ēl�ŕԂ��悤�ɂȂ�
    auto x = make_A<int&>(i);
    std::cout << &x.get_value() << std::endl;
}