#include <vector>

template <typename T>
typename std::vector<T>::reference // Tを使っているのでtypenameが必要
at(std::vector<T>& v, std::size_t i)
{
    return v[i];
}

template <typename T>
typename std::size_t // Tに依存してないので本来はtypenameは不要だが、エラーではない
size(const std::vector<T>& v)
{
    return v.size();
}

int main()
{
    std::vector<int> v = { 0, 1, 2, 3 };

    // std::vector自体はテンプレートだが、main()関数は関数テンプレートではなく、
    // テンプレートパラメーターを使っているわけではないので、これは依存名ではない
    std::vector<int>::reference r = at(v, 0);
}
