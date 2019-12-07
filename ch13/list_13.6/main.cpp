#include <iostream>
#include <string>

int main()
{
    std::string str0 = "ushikamoshika";
    const char* cstr = "kamoshika";
    std::string str1 = cstr;

    int ret = 0;
    ret = str0.compare("yamaneko"); // ret < 0
    std::cout << "ret: " << ret << std::endl;

    // str0.substr(4).compare(str1)と同じ。ret == 0
    ret = str0.compare(4, std::string::npos, str1);
    std::cout << "ret: " << ret << std::endl;

    // str0.substr(8, 5).compare(str1.substr(4, 5))と同じ。ret == 0
    ret = str0.compare(8, 5, str1, 4, 5);
    std::cout << "ret: " << ret << std::endl;
}
