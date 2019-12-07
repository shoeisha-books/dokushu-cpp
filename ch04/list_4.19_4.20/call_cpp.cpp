#include <iostream>

void call_c();

void call_cpp()
{
    std::cout << "call_cpp" << std::endl;
    call_c();
}
