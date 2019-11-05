#include <type_traits>

template <typename T>
class vector2d
{
    static_assert(std::is_signed<T>::value,
        "Tは符号を扱える数値型である必要があります");
    T x;
    T y;

public:
    // ……
};

vector2d<float> vf; // OK
vector2d<int> vi; // OK
vector2d<unsigned int> vu; // エラー