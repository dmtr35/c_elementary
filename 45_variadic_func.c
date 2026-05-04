#include <stdio.h>
#include <stdarg.h>             /* va_arg */

// ... это вариадические параметры
int sum(int count, ...)
{
    int s = 0;
    va_list arg;                            // специальный указатель va_list
    va_start(arg, count);                   // указывает на первый вариадический параметр (который идет после count)
    // printf("%p:\n", arg);


    for(int i = 0; i < count; ++i) {
        s += va_arg(arg, int);
    }

    printf("\n");
    va_end(arg);                            // в конце
    return s;
}


int main()
{
    short one = 1;
    short two = 2;
    short three = 3;
    short four = 4;
    short five = 5;
    short six = 6;
    short seven = 7;
    // int res = sum(5, 1, 2, 3, 4, 5);
    int res = sum(7, one, two, three, four, five, six, seven);
    printf("res = %d\n", res);

    return 0;
}