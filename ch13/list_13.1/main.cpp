#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    /* 2つの文字列を結合する：C言語*/
    const char* strA = "Hello, ";
    const char* strB = "world.";

    /* 領域確保 */
    char* strC = (char*)malloc(strlen(strA) + strlen(strB) + 1);

    strcpy(strC, strA); /* strAをstrCにコピー */
    strcat(strC, strB); /* strBをstrCに結合 */
    puts(strC);

    if (strcmp(strC, "Hello, world.") == 0) /* 比較 */
    {
        puts("ok.");
    }
    free(strC); /* 領域解放 */
}