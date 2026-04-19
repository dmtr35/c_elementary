#include <stdio.h>
#include <string.h>

/*
    x   НЕ(~)
    0   1
    1   0
*/

void printf_b(unsigned int x)
{
    unsigned int mask = 1u << 31;

    putchar('b');
    while (mask) {
        putchar((x & mask) ? '1' : '0');
        mask >>= 1;
    }
    putchar('\n');
}


int main()
{
    unsigned int var = 153;                    // двоичная запись 10011001
    unsigned int not_v = ~var;                 // результат:      01100110

    printf("var: %d, not_v: %d\n", var, not_v);
    printf_b(var);
    printf_b(not_v);
    

    return 0;
}