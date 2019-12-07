#include <iostream>

int function(int a, int b, int c)
{
    std::cout << "function(" << a << ", " << b << ", " << c << ")"
        << std::endl;
}

int main()
{
    function(0, 1, 2);

    auto lambda = [](int a, int b, int c)
    {
        std::cout << "lambda(" << a << ", " << b << ", " << c << ")"
            << std::endl;
    };
    
    lambda(0, 1, 2);
}
