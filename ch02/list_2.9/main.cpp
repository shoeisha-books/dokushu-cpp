#include <iostream>

int main()
{
    int value = 42; // int型の変数
    int other = 0; // 別の変数
    int* pointer = &value; // 変数valueへのポインター
    int& reference = value; // 変数valueへの参照

    std::cout << "valueのアドレスは" << &value << "で、値は" << value <<
        "です" << std::endl;

    std::cout << "otherのアドレスは" << &other << "で、値は" << other <<
        "です" << std::endl;

    std::cout << "pointerの持つアドレスは" << pointer << "で、値は" <<
        *pointer << "です" << std::endl;

    std::cout << "referenceのアドレスは" << &reference << "で、値は" <<
        reference << "です" << std::endl;

    pointer = &other; // ポインターが持つアドレスをotherのアドレスに変更
    reference = other; // 参照先をvalueからotherへ変えたつもり
    
    std::cout << std::endl; // 1行空行を入れる
    
    std::cout << "valueのアドレスは" << &value << "で、値は" << value <<
        "です" << std::endl;
    
    std::cout << "otherのアドレスは" << &other << "で、値は" << other <<
        "です" << std::endl;
    
    std::cout << "pointerの持つアドレスは" << pointer << "で、値は" <<
        *pointer << "です" << std::endl;
    
    std::cout << "referenceのアドレスは" << &reference << "で、値は" <<
        reference << "です" << std::endl;
}
