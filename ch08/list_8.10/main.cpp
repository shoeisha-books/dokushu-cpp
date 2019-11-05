#include <fstream>
#include <iostream>

int main()
{

    std::ofstream out{ "hello_binary.bin", std::ios::binary };

    // 人間が文字として認識できない数値を直接出力
    out.put(1);

    // ストリームが返されるのでこのように連続して呼ぶことができる
    out.put(2).put(3);

    out.close();

    char a, b, c;
    std::ifstream in{ "hello_binary.bin", std::ios::binary };

    // 1バイトを直接入力
    in.get(a);
    in.get(b).get(c); // get()関数も同様に連続して呼べる
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
}
