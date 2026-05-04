#include <stdio.h>

/* Глобальные переменные */
char name[] = "Variables";                          // section .data - глобальные данные с начальными значениями 
double big_ar[10000000];                            // section .bss - глобальные данные без начальных значений

extern int global_var;                              // эта переменная где-то определена (в каком-то модуле)
extern char global_str[];
extern int sum(int, int);                       // функция где-то будет определена, в этом или другом файле

extern int global_seed;

unsigned int counter()
{
    static unsigned int cnt = 10;
    return ++cnt;
}

int main(void)
{
    // double big_ar[10000000];                     // слишком большой массив, не вмещается на стеке и падает в 'Segmentation fault'
    int var_main;                                   // внутренняя переменная
    printf("%d\n", var_main);

    int a = 1, c = 3;
    // независимый блок данных
    {
        int b = 2;
        printf("a = %d, b = %d\n", a, b);
    }
    printf("a = %d\n", a);


    printf("a = %p, c = %p\n", &a, &c);
    if(a < c) {
        int t = a;
        a = c;
        c = t;
    }
    printf("a = %p, c = %p\n", &a, &c);

    // =======================================================
    printf("counter(): %u\n", counter());
    printf("counter(): %u\n", counter());
    printf("counter(): %u\n", counter());
    printf("counter(): %u\n", counter());
    // =======================================================

    printf("global_var = %d\n", global_var);            // extern int global_var; 
    printf("global_str = %s\n", global_str);            // extern char global_str[]; 
    
    printf("sum: %d\n", sum(1, 3));
    
    // printf("global_seed = %d\n", global_seed);          // определена в другом файле как static, поэтому ошибка "undefined reference to `global_seed'"



    return 0;
}


char global_str[100] = "Hello";