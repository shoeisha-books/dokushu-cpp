#include <iostream>
#include <string>
#include <regex>

int main()
{
    std::regex re{ "(A.*)C(.*A)" }; // A‚Ån‚Ü‚èC‚ğ‹²‚ñ‚ÅA‚ÅI‚í‚é
    std::string input = "ABRACADABRA";
    std::smatch match;

    if (std::regex_match(input, match, re))
    {
        for (std::size_t i = 0; i < match.size(); ++i)
        {
            std::cout << match.str(i)
                << " position = " << match.position(i)
                << " length = " << match.length(i)
                << std::endl;
        }
    }
}
