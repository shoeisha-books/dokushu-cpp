#include <iostream>
#include <string>

int main()
{
    // 2‚Â‚Ì•¶š—ñ‚ğŒ‹‡‚·‚éFC++
    std::string strA = "Hello, ";
    std::string strB = "world.";

    std::string strC = strA + strB; // Œ‹‡
    std::cout << strC << std::endl;

    if (strC == "Hello, world.") // ”äŠr
    {
        std::cout << "ok." << std::endl;
    }
    // Šm•Û‚³‚ê‚½—Ìˆæ‚Í©“®“I‚É‰ğ•ú‚³‚ê‚é
}
