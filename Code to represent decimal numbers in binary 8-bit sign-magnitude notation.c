#include <stdio.h>
int main()
{
    signed char sc = -43;
    unsigned char mask = 128;

    while(mask)
    {
     putchar((mask & sc) ? '1' : '0');
     mask>>=1;
    }
    putchar('\n');
    return 0;
}
