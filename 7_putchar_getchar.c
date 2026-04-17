#include <stdio.h>      /* putchar, printf, perror, getchar, scanf */

// считывает один символ из stdin. EOF == -1
int getchar(void);

// вывод символа в stdout
int putchar(int ch);




int main()
{
    int value = getchar();
    putchar(value);




    return 0;
}