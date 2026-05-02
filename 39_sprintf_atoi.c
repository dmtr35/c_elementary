#include <stdio.h>                    /* sprintf */
#include <string.h>
#include <stdlib.h>                   /* malloc, free, atoi, atol, atoll, atof */

// работает как printf, но выходной поток заносится в буфер (формирует строки)
// преобразование чисел в строку
int sprintf(char* buffer, const char* format, ...);

// преобразование из строки в число
int atoi(const char* str);
long atol(const char* str);
long long atoll(const char* str);
double atof(const char* str);


int main()
{
    double width = 2.4, height = 0.76, dopth = 3.14;
    const char format[] = "(%s: %.2f x %.2f x %.2f)";                     // .3s вывод не больше 3х символов
    char str_doubles[20]; 
    sprintf(str_doubles, "%.2f%.2f%.2f", width, height, dopth);
    size_t size_doubles = strlen(str_doubles);
    
    char name[] = "Chair";
    const size_t size = strlen(name) + size_doubles + 11; 
    const size_t size2 = size_doubles + 9; 
    char *info = malloc(size);
    char *info2 = malloc(size2);


    sprintf(info, format, name, width, height, dopth);
    sprintf(info2, "(%.2f x %.2f x %.2f)", width, height, dopth);
    printf("%s\n%s\n", info, info2);

    free(info);
    free(info2);
    // ======================================================================
    // Преобразование чисел в строку

    int var_i = -123;
    double var_d = 35.7895;
    char str_i[10] = {0};
    char str_d[10] = {0};

    sprintf(str_i, "%d", var_i);
    sprintf(str_d, "%.2f", var_d);
    puts(str_i);
    puts(str_d);
    // ======================================================================
    // Преобразование из строки в число

    int digit_i = atoi(str_i);
    double digit_d = atof(str_d);

    printf("%d\n" ,digit_i);
    printf("%.2f\n" ,digit_d);

    // ---------------------------------------------
    int a = atoi("1a32");                               // вернет 1
    long b = atol("234235354");
    long long c = atoll("23423535456456");
    double d = atof("4564.4545");

    printf("a = %d\nb = %ld\nc = %lld\nd = %f\n", a, b, c, d);
    // ======================================================================


    return 0;
}