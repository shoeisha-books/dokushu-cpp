#include <tuple>
#include <iostream>

int main()
{
    // クラステンプレートの型推論をさせる
    // std::tuple<std::string, int, const char*>
    std::tuple t{ std::string{"structured"}, 42, "binding" };

    auto [a, b, c] = t; // 構造化束縛。各要素をコピーする
    
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    
    std::cout << std::endl;
    
    auto& [x, y, z] = t; // 構造化束縛。ただし各要素への参照を持つ
    
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    
    std::cout << std::endl;
    
    x = "update"; // 参照を使ってタプルの要素を変更する
    std::cout << std::get<0>(t) << std::endl;
}
