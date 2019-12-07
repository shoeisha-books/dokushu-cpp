#include <fstream>
#include <iostream>

int main()
{
    std::ofstream out{ "hello_binary.bin", std::ios::binary };

    const char value[] = { 0, 1, 2 };
    out.write(value, sizeof(value)); // 3バイトだけ書き込む

    out.close();

    std::ifstream in{ "hello_binary.bin", std::ios::binary };

    char buffer[10];
    in.read(buffer, 10); // 10バイト読み込もうとする

    std::cout << in.gcount() << std::endl; // 実際に読み込んだバイト数
}
