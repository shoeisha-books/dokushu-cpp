#include <iostream>

int main()
{
    std::cout << R"hello_raw(生文字列リテラルは
ソースコード上の改行も
    そのまま文字列の一部として扱われるうえ、
\もエスケープとしてではなく
バックスラッシュ文字として扱われる
ので\nは改行にはならない)hello_raw" << std::endl;
}