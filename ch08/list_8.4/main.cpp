#include <iostream>

int main()
{
    char buffer[256];
    std::cin.getline(buffer, 256); // 改行文字が見つかるまで読み込み、改行文字を取り除く

    // getline()はヌルで終端するのでそのまま文字列として出力して問題ない
    std::cout << "buffer: " << buffer << std::endl;

    // , を区切り文字として読み込み、区切り文字は残しておく
    std::cin.get(buffer, 256, ',');

    // get()もヌルで終端するのでそのまま出力に使って問題ない
    std::cout << "buffer: " << buffer << std::endl;

    std::cin.get(buffer, 256, ',');
    // 先頭に前回の区切り文字が残っているので
    // バッファーは空になる
    if (buffer[0] == '\0')
    {
        std::cout << "バッファーは空" << std::endl;
    }
}
