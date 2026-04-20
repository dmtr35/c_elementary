#include <stdio.h>
#include <string.h>

/*
    x   НЕ(~)
    0   1
    1   0
*/
/*
    Битовая операция И    |         Битовая операция ИЛИ        |       Битовая операция исключающее ИЛИ
    x   y   И(&)          |         x   y   ИЛИ(|)              |       x   y   XOR(^)
    0   0   0             |         0   0   0                   |       0   0   0
    0   1   0             |         0   1   1                   |       0   1   1
    1   0   0             |         1   0   1                   |       1   0   1
    1   1   1             |         1   1   1                   |       1   1   0
*/

/*  Приоритеты битовых операций
    Бинарная_форма  Краткая_форма   Приоритет
    ~a;                             4(НЕ)
    a = a & b;      a &= b;         3(И)
    a = a ^ b;      a ^= b;         2(XOR)
    a = a | b;      a |= b;         1(ИЛИ)
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
    // бировое НЕ
    unsigned char var = 153;                    // двоичная запись: 10011001
    unsigned char not_v = ~var;                 // результат:       01100110
    
    printf("var: %d, not_v: %d\n", var, not_v);
    // printf_b(var);
    // printf_b(not_v);
    
    // ==============================================================
    // битовое И
    unsigned char flags = 5;                    // двоичная запись: 00000101
    unsigned char mask = 4;                     // двоичная запись: 00000100

    unsigned char res = flags & mask;           // результат:       00000100
    // printf_b(res);

    // проверка на включиный бит
    if ((flags & mask) == mask)
        printf("bit 2 is on\n");
    else
        printf("bit 2 is off\n");

    // выключить бит
    flags &= ~mask;                             // результат:       00000001
    printf_b(flags);

    // включить бит
    flags |= mask;
    printf_b(flags);

    // переключение битов
    flags ^= mask;
    printf_b(flags);                            // результат:       00000001
    flags ^= mask;
    printf_b(flags);                            // результат:       00000101

    return 0;
}