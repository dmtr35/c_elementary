#include <stdio.h>
#include <stdarg.h>             /* va_arg */

// ... это вариадические параметры
double sum(int count, ...)
{
    int s = 0;
    va_list arg;                            // специальный указатель va_list
    va_start(arg, count);                   // указывает на первый вариадический параметр (который идет после count)
    printf("%p:\n", arg);


    for(int i = 0; i < count; ++i) {
        // s += va_arg(arg, double);
        printf("arg[%d]: %.2f\n", i, va_arg(arg, double));
    }

    printf("\n");
    va_end(arg);                            // в конце
    return s;
}


int main()
{
    double one = 1.;
    double two = 2.;
    double three = 3.;
    double four = 4.;
    double five = 5.;
    double six = 6.;
    double seven = 7.;
    // int res = sum(5, 1, 2, 3, 4, 5);
    double res = sum(10, one, two, three, four, five, six, seven, 10., 11., 12.);
    printf("res = %.2f\n", res);

    return 0;
}