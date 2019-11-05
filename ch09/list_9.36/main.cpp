#include <iostream>
#include <string>

std::string type(int)
{
    return "int";
}

std::string type(const char*)
{
    return "const char*";
}

int main()
{
    auto lambda = [](const auto& value) // value‚ÌŒ^‚ÍŒÄ‚Ño‚µ‚Ìˆø”‚©‚ç„˜_‚³‚ê‚é
    {
        std::cout << type(value) << std::endl;
    };

    lambda(42);

    lambda("type deduction");
}
