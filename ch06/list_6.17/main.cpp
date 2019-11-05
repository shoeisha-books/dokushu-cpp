#include <iostream>

class heap
{
    int* i;
public:
    heap() : i{ nullptr } { }

    ~heap()
    {
        delete i;
    }
    
    bool create();

    // boolŒ^‚É•ÏŠ·‚·‚é
    operator bool() const;
};

bool heap::create()
{
    // true/false‚É‚È‚é‚Ì‚ÅAif•¶‚Å‚»‚Ì‚Ü‚ÜğŒ•ªŠò‚Å‚«‚é
    if (*this) // boolŒ^‚Ö‚Ì•ÏŠ·ŠÖ”‚ªŒÄ‚Î‚ê‚é
    {
        return false;
    }

    i = new int{};
    *i = 0;
    return true;
}

heap::operator bool()const
{
    return i != nullptr;
}

int main()
{
    heap h;

    if (!h)
    {
        std::cout << "•ÏŠ·ŠÖ”‚ªfalse‚ğ•Ô‚µ‚Ü‚µ‚½" << std::endl;
    }

    std::cout << "heap::create()ŒÄ‚Ño‚µ" << std::endl;
    h.create();

    if (!h)
    {
        std::cout << "•ÏŠ·ŠÖ”‚ªfalse‚ğ•Ô‚µ‚Ü‚µ‚½" << std::endl;
    }

    std::cout << "I—¹" << std::endl;
}
