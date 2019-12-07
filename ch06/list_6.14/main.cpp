#include <iostream>

class Integer
{
    int value;

public:
    explicit Integer(int value) : value{ value } { }

    // メンバー関数で実装することもできる
    friend Integer operator+(const Integer&, int);

    // メンバー関数では実装できない
    friend Integer operator+(int, const Integer&);

    friend Integer operator-(const Integer&, int);
    friend Integer operator-(int, const Integer&);

    void show() const;
};

Integer operator+(const Integer& lhs, int rhs)
{
    // フレンド関数なので、プライベートメンバーにアクセスできる
    return Integer{ lhs.value + rhs };
}

// Integerのインスタンスが右辺にくる+はこのオーバーロードが使用される
Integer operator+(int lhs, const Integer& rhs)
{
    return Integer{ lhs + rhs.value };
}

Integer operator-(const Integer& lhs, int rhs)
{
    return Integer{ lhs.value - rhs };
}

Integer operator-(int lhs, const Integer& rhs)
{
    return Integer{ lhs - rhs.value };
}

void Integer::show() const
{
    std::cout << "value: " << value << std::endl;
}

int main()
{
    Integer ten{ 10 };

    Integer result = 1 + ten - 8;

    result.show();
}
