#include <iostream>
int main()
{
    // 初期化リストよりも配列のほうが長いので、
    // 初期値がない残りは0で初期化される
    int array[5] = { 5, 4, 3 };

    // 配列の先頭は0から始まる
    std::cout << "array[0] = " << array[0] << std::endl;
    
    std::cout << "array[1] = " << array[1] << std::endl;
    std::cout << "array[2] = " << array[2] << std::endl;
    std::cout << "array[3] = " << array[3] << std::endl;
    
    // 配列の最後の添え字は 長さ-1
    std::cout << "array[4] = " << array[4] << std::endl;
}
