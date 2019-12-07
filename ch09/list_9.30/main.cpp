#include <vector>

// エイリアステンプレート
template <typename T>
// この型はTに依存するのでtypenameが必要
using vector_reference = typename std::vector<T>::reference;

template <typename T>
vector_reference<T> // Tを使っているが、エイリアスの中で依存名が解決しているので
                    // ここでは不要
at(std::vector<T>& v, std::size_t i)
{
    return v[i];
}
