#include <cstdint> // std::intptr_tのため
#include <iostream>

// さまざまな理由でconst修飾されてない安全ではない関数
// 特にC言語との兼ね合いでこのようになっていることが多い
extern "C" void unsafe_c_function(char* str)
{
    std::cout << "unsafe_c_function: " << str << std::endl;
}

// さまざまな理由で正しい型で受け取れない関数
// コールバックAPIなどによく見られる
void unsafe_interface_function(void* data)
{
    auto value = reinterpret_cast<std::intptr_t>(data);
    std::cout << "unsafe_interface_function: " << value << std::endl;
}

int main()
{
    const int value = 72;
    const char message[] = "constant string";

    // 関数に渡せるようにconstを外す
    unsafe_c_function(const_cast<char*>(message));

    // 数値をポインター型に変換して渡す
    unsafe_interface_function(reinterpret_cast<void*>(
        static_cast<std::intptr_t>(value)));
}
