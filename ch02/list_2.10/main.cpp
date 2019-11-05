#include <iostream>

// í‚É1‚ğ•Ô‚·ŠÖ”
int one()
{
    return 1;
}

int main()
{
    auto d = 3.14; // 3.14‚ÍdoubleŒ^‚Ì’l‚È‚Ì‚Åd‚ÍdoubleŒ^‚É„˜_‚³‚ê‚é

    d = 2.71f; // 2.71f‚ÍfloatŒ^‚È‚Ì‚ÅAdoubleŒ^‚É„˜_‚³‚ê‚½d‚É–â‘è‚È‚­Ši”[‚Å‚«‚é
    
    std::cout << d << std::endl;
    
    // Œ^„˜_‚ÍŠÖ”ŒÄ‚Ño‚µ‚â”’lŒvZ‚È‚Ç‚Ì®‚ÌŒ‹‰Ê‚©‚ç‚às‚¦‚é
    
    // one()‚ÍintŒ^‚Ì’l‚ğ•Ô‚·ŠÖ”‚È‚Ì‚ÅA•Ï”i‚ÍintŒ^‚É„˜_‚³‚ê‚é
    auto i = one();
    
    i = 42.195; // i‚ÍintŒ^‚È‚Ì‚ÅdoubleŒ^‚Ì’l‚Ì‘ã“ü‚Å‚ÍˆÃ–Ù‚ÌŒ^•ÏŠ·‚ªs‚í‚ê‚é
    
    std::cout << i << std::endl;
}
