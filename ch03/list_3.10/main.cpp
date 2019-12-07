#include <iostream>

class S
{
public:
    int answer = 42; // NSDMI
    float pi{ 3.14159265f }; // これもNSDMI
};

int main()
{
    S s; // NSDMIによってデフォルト値で初期化される

    std::cout << "s.answer: " << s.answer << std::endl;

    std::cout << "s.pi: " << s.pi << std::endl;
}
