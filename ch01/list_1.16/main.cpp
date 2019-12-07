#include <iostream>

int main()
{
    float f = -1234.5678f; // 負値の浮動小数点数
    std::cout << f << std::endl;
    
    int i = f; // floatからintへの暗黙の型変換
               // 符号は扱えるが小数部がすべて切り捨てられる
    std::cout << i << std::endl;
    
    unsigned int u = i; // intからunsigned intへの暗黙の型変換
                        // 負数を扱えないので対応する正数になる
    std::cout << u << std::endl;
    
    unsigned short s = u; // unsigned intからunsigned shortへの暗黙の型変換
                          // unsigned shortで扱えない巨大な数になっているので
                          // unsigned shortの範囲に収められる
    std::cout << s << std::endl;
    
    u = s; // unsigned shortからunsigned intへの暗黙の型変換
           // unsigned shortにしたときに値が切り詰められているので、
           // 前のunsigned intのときの値とは異なる
    std::cout << u << std::endl;
    
    f = u; // unsigned intからfloatへの暗黙の型変換
           // とても巨大な整数でなければおおよそ問題ない
    std::cout << f << std::endl;
}
