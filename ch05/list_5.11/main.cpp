#include <iostream>
int main()
{
    int* p = new int(42);

    std::cout <<
        "生命、宇宙、そして万物についての究極の疑問の答え: " <<
        *p << std::endl;

    delete p; // delete演算子は通常のまま
}
