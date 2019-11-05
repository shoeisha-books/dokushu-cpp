#include <iostream>
#include <string>

int main()
{
    std::string str = "abc";

    // C•¶Žš—ñ‚ðŽæ“¾
    const char* c_str = str.c_str();

    int pos = 0;
    while (true)
    {
        // ––”ö‚É‚Í•K‚¸ƒkƒ‹•¶Žš‚ª—ˆ‚é
        if (c_str[pos] == '\0')
        {
            std::cout << "[\\0]" << std::endl;
            break;
        }
        else
        {
            std::cout << c_str[pos] << std::endl;
        }
        ++pos;
    }
}
