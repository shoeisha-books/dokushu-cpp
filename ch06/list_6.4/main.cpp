#include <iostream>

class Integer
{
    int value;

public:
    Integer(int value) : value{ value } { }

    Integer& operator++(); // 前置インクリメント演算子
    Integer& operator--(); // 前置デクリメント演算子

    // 後置は第2項にint型を受け取る関数としてオーバーロード
    Integer operator++(int); // 後置インクリメント演算子
    Integer operator--(int); // 後置デクリメント演算子
    
    void show() const;
};

Integer& Integer::operator++()
{
    // 前置は変更したあとの値（つまり自分自身）を返すので、
    // メンバー変数を変更してから自分自身を参照で返す
    ++value;
    return *this;
}

Integer& Integer::operator--()
{
    --value; // デクリメントは足す代わりに引く
    return *this;
}

Integer Integer::operator++(int)
{
    // 後置は変更前の値を返さないといけないので、
    // 先に自分自身のコピーを作っておく
    auto tmp = *this;
    ++* this; // 動作に一貫性を持たせるため前置を呼び出す
    return tmp; // コピーしておいた変更前の値を返す
}

Integer Integer::operator--(int)
{
    auto tmp = *this;
    --* this;
    return tmp;
}

void Integer::show() const
{
    std::cout << "Integer.value = " << value << std::endl;
}

int main()
{
    Integer x = 10;
    
    ++x;
    x.show();
    
    x++;
    x.show();
    
    --x;
    x.show();
    
    x--;
    x.show();
}
