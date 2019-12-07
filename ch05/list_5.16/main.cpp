#include <iostream>

class Marker
{
public:
    Marker();
    ~Marker();
};

Marker::Marker()
{
    std::cout << "コンストラクター: " << this << std::endl;
}

Marker::~Marker()
{
    std::cout << "デストラクター: " << this << std::endl;
}

void copy(Marker m)
{
    std::cout << "copy: " << &m << std::endl;
}

void reference(const Marker& m)
{
    std::cout << "reference: " << &m << std::endl;
}

int main()
{
    Marker m;

    std::cout << "値渡し前" << std::endl;
    copy(m);
    std::cout << "値渡し後" << std::endl;

    std::cout << "参照渡し前" << std::endl;
    reference(m);
    std::cout << "参照渡し後" << std::endl;
}
