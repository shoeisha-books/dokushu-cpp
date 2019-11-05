#include <string>
#include <iostream>

int main()
{
    // 空白またはカンマを区切り文字として文字列を切り出す
    std::string str = "C,C++,Java,Ruby,";
    std::string delim = ","; // 区切り文字（空白またはカンマ）
 
    std::string::size_type fpos = 0;
    while ((fpos = str.find_first_not_of(delim, fpos))
        != std::string::npos)
    {
        // lpos：fpos以降、delimに含まれる文字の位置
        auto lpos = str.find_first_of(delim, fpos);
    
        // 文字列と開始位置と長さで初期化
        std::string token(str, fpos, lpos - fpos);
        std::cout << "[" << token << "] ";
        fpos = lpos;
    }
    std::cout << std::endl;
}
