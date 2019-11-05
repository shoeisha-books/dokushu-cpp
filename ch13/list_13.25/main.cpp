#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{ "[^A]+A" }; // A‚Å‚Í‚È‚¢•¶Žš‚Ì˜A‘±‚É‘±‚­A
    std::string input = "ABRACADABRA";

    std::sregex_token_iterator first(input.begin(), input.end(), re);
    decltype(first) last;

    while (first != last)
    {
        std::cout << "[" << first->str() << "]"
            << " pos = " << std::distance(input.cbegin(), first->first)
            << " len = " << first->length()
            << std::endl;
        ++first;
    }
}
