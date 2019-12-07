#include <iostream>

class Array
{
    int buffer[100];

public:
    int& operator[](int index); // 添字演算子

    std::size_t size() const { return 100; }
};

int& Array::operator[](int index)
{
    return buffer[index];
}

int main()
{
    Array array;

    for (std::size_t i = 0; i < array.size(); ++i)
    {
        array[i] = i;
    }

    std::cout << array[10] << std::endl;
}
