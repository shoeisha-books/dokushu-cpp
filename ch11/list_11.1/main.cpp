#include <iostream>
#include <typeinfo> // typeid‰‰ZqAstd::type_info‚É•K—v

int main()
{
    // typeid‰‰Zq‚ª•Ô‚·Œ^‚Íí‚Éstd::type_info‚Ö‚ÌconstQÆ

    const std::type_info& int_type = typeid(int); // intŒ^‚ÉŠÖ‚·‚éî•ñ‚ğæ“¾
    const std::type_info& one_type = typeid(1); // 1‚ÉŠÖ‚·‚éŒ^î•ñ‚ğæ“¾

    if (int_type == one_type) // ‘¼‚ÌŒ^î•ñ‚Æ”äŠr
    {
        std::cout << "1‚ÍintŒ^‚Å‚·" << std::endl;
    }
    else
    {
        std::cout << "1‚ÍintŒ^‚Å‚Í‚ ‚è‚Ü‚¹‚ñ" << std::endl;
    }

    const std::type_info& str_type = typeid("hoge"); // •¶š—ñ"hoge"‚ÌŒ^î•ñ‚ğæ“¾
    if (int_type != str_type)
    {
        std::cout << "\"hoge\"‚ÍintŒ^‚Å‚Í‚ ‚è‚Ü‚¹‚ñ" << std::endl;
    }
    else
    {
        std::cout << "\"hoge\"‚ÍintŒ^‚Å‚·" << std::endl;
    }
}
