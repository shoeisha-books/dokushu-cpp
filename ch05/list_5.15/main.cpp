#include <iostream>
#include <initializer_list> // std::initializer_listを使うのに必要

class int_vector
{
    std::size_t m_size;
    int* m_array;

public:
    int_vector(std::initializer_list<int> init);
    ~int_vector();

    std::size_t size() const
    {
        return m_size;
    }

    int at(int n) const
    {
        return m_array[n];
    }
};

// std::initializer_listを受け取るコンストラクター
int_vector::int_vector(std::initializer_list<int> init)
    : m_size{ init.size() }, m_array{ new int[init.size()] }
{
    std::size_t i = 0;
    // std::initializer_listの中身を使って動的配列を初期化する
    for (int e : init)
    {
        m_array[i] = e;
        i += 1;
    }
}

int_vector::~int_vector()
{
    delete[] m_array;
}

int main()
{
    // 配列のようにstd::initializer_listを使って初期化
    int_vector iv = { 0, 1, 2, 3, 4, 5 };
    std::cout << "iv.size() = " << iv.size() << std::endl;
    std::cout << "iv.at(3) = " << iv.at(3) << std::endl;
}