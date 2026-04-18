#include <stdio.h>      /* putchar, printf, perror, getchar, scanf */

/* format - это указатель на строку, в которой определен формат 
   для ввода информации из стандартного потока stdin 
   Возвращает количество прочитаных элементов*/
int scanf(const char* format, ...);

// Спецификаторы преобразований для scanf
// Спецификатор                Описание
// %d                          Целое число со знаком в десятичной форме. (Приводится к типу int)
// %i                          Целое число в десятичной, шестнадцатеричной или восьмеричной системах. (Приводится к типу int)
// %u                          Целое беззнаковое (unsigned) число в десятичной форме. (Приводится к типу unsigned int)
// %o                          Целое число в восьмеричной форме. (Приводится к типу int)
// %x, %X                      Целое число в шестнадцатеричной форме. (Приводится к типу int)
// %f, %e, %g                  Вещественное число. (Приводится к типу float)
// %F, %E, %G                  
// %c                          Символ в соответствии с текущей кодовой таблицей. (Приводится к типу char)
// %s                          Строка(последовательность символов). Читается до первого пробела, перевода строки или символа табуляции.
// ---------------------------------------------------------------------------------------

// Модификаторы
// h                           %hd, %hi            - для short int
//                             %hx, %ho, %hu       - для unsigned, short
// hh                          %hhd                - для signed char
//                             %hhu                - для unsigned char
// l                           %ld, %li            - для long int
//                             %hx, %ho, %hu       - для unsigned long
//                             %lf, %lg, %le       - для double
// L                           %Lf, %Lg, %Le       - для long double
// ll (в стандарте C99)        %lld                - для long long int
//                             %llu                - для unsigned long long
// цифры                       Максимальная ширина ввода или служебный символ
// *                           Пропуск данных


int main()
{
    int count;
    char byte0 = '0', byte1 = '0', byte2 = '0';
    int res;

    
    // count = scanf("%c %c", &byte1, &byte2);                                 // пробел, пропускает все пробельные символы между данными
    // printf("count = %d, byte1 = %c, byte2 = %c\n", count, byte1, byte2);    // count = 2, byte1 = a, byte2 = d

    // count = scanf("%c,%c", &byte1, &byte2);                                 // ввод с комой между данными
    // printf("count = %d, byte1 = %c, byte2 = %c\n", count, byte1, byte2);
// --------------------------------------------------------------

    long long var_lli = 0;
    double var_d = 0;

    // res = scanf("%lld %lf", &var_lli, &var_d);
    // printf("res = %d: var_lli = %lld, var_d = %.2f\n", res, var_lli, var_d);                         // res = 2: var_lli = 3216549871111, var_d = 21.57
    // --------------------------------------------------------------
    
    unsigned int price = 0;
    double weight = 0.0;
    
    res = scanf("%*u; %u; %lf", &price, &weight);                                                // * - пропустает данные
    printf("res = %d: price = %d, weight = %.2f\n", res, price, weight);                         // res = 2: price = 600, weight = 123.65



    return 0;
}