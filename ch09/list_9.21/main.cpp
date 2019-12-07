#include <iostream>
#include <string>

// ヘルパークラスの前方宣言
template <typename T>
class helper;

// intのときに使われるヘルパークラス
template <>
class helper<int>
{
public:
    static std::string name() { return "int"; }
};

// doubleのときに使われるヘルパークラス
template <>
class helper<double>
{
public:
    static std::string name() { return "double"; }
};

template <typename T>
struct A
{
    T value;
};

template <typename T>
void deduce(A<T> a)
{
    // 推論されたTを使ってヘルパークラスのstaticメンバー関数を呼び出す
    std::cout << helper<T>::name() << std::endl;
}

int main()
{
    A<int> ai;

    deduce(ai); // aiから推論されるTを表示する

    A<double> ad;

    deduce(ad); // aiから推論されるTを表示する
}
