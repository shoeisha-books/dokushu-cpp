#include <iostream>

int main()
{
    float f = -1234.5678f; // •‰’l‚Ì•‚“®¬”“_”
    std::cout << f << std::endl;
    
    int i = f; // float‚©‚çint‚Ö‚ÌˆÃ–Ù‚ÌŒ^•ÏŠ·
               // •„†‚Íˆµ‚¦‚é‚ª¬”•”‚ª‚·‚×‚ÄØ‚èÌ‚Ä‚ç‚ê‚é
    std::cout << i << std::endl;
    
    unsigned int u = i; // int‚©‚çunsigned int‚Ö‚ÌˆÃ–Ù‚ÌŒ^•ÏŠ·
                        // •‰”‚ğˆµ‚¦‚È‚¢‚Ì‚Å‘Î‰‚·‚é³”‚É‚È‚é
    std::cout << u << std::endl;
    
    unsigned short s = u; // unsigned int‚©‚çunsigned short‚Ö‚ÌˆÃ–Ù‚ÌŒ^•ÏŠ·
                          // unsigned short‚Åˆµ‚¦‚È‚¢‹‘å‚È”‚É‚È‚Á‚Ä‚¢‚é‚Ì‚Å
                          // unsigned short‚Ì”ÍˆÍ‚Éû‚ß‚ç‚ê‚é
    std::cout << s << std::endl;
    
    u = s; // unsigned short‚©‚çunsigned int‚Ö‚ÌˆÃ–Ù‚ÌŒ^•ÏŠ·
           // unsigned short‚É‚µ‚½‚Æ‚«‚É’l‚ªØ‚è‹l‚ß‚ç‚ê‚Ä‚¢‚é‚Ì‚ÅA
           // ‘O‚Ìunsigned int‚Ì‚Æ‚«‚Ì’l‚Æ‚ÍˆÙ‚È‚é
    std::cout << u << std::endl;
    
    f = u; // unsigned int‚©‚çfloat‚Ö‚ÌˆÃ–Ù‚ÌŒ^•ÏŠ·
           // ‚Æ‚Ä‚à‹‘å‚È®”‚Å‚È‚¯‚ê‚Î‚¨‚¨‚æ‚»–â‘è‚È‚¢
    std::cout << f << std::endl;
}
