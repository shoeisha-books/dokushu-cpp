#include <iostream>

#define HOGE

int main()
{
#if defined(HOGE)
    std::cout << "defined(HOGE)‚Ítrue‚Å‚·B" << std::endl; // ‡@
#else
    std::cout << "defined(HOGE)‚Ífalse‚Å‚·B" << std::endl; // ‡A
#endif
}
