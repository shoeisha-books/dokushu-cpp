#include <iostream>

extern "C" void call_c(); // Cリンケージを指定してC言語の関数を呼べるように

extern "C" void call_cpp() // Cリンケージを指定してC言語から呼べるように
{
    std::cout << "call_cpp" << std::endl;

    call_c();
}
