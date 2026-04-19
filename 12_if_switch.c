#include <stdio.h>



int main()
{
    int x;
    if (scanf("%d", &x) != 1) {
        printf("Error scanf\n");
        return 0;
    }

    if (x < 0) x = -x;          // меняем знак на противоположный
    printf("x = %d\n", x);

    if (x < 0)
        printf("x < 0\n");
    else
        printf("x >= 0\n");

// ------------------------------------------------------------------
// тернарный оператор

double a = 7.5, b = -3.43;
double max_ab;

// if (a > b)
//     max_ab = a;    
// else
//     max_ab = b;

max_ab = a > b ? a : b;
// ------------------------------------------------------------------
// switch
/* РЕКОМЕНДУЕТСЯ:
        - switch выносить в отдельную функцию и прерывать с помощью return
        - после каждой метки вызывать некотурую функцию вместо набора операторов
        - никогда не использовать вложеные операторы switch
*/

    int item;

    printf("1. Learning C language\n"
           "2. Learning Python language\n"
           "3. Learning Java language\n"
           "4. Learning C++ language\n"
           "5. Exit\n");

    if (scanf("%d", &item) != 1) {
        printf("Error input scanf");
        return 0;
    }

    switch(item) {
    case 1:
        printf("1. Learning C language\n");
        break;
    case 2:
        printf("2. Learning Python language\n");
        break;
    case 3:
        printf("3. Learning Java language\n");
        break;
    case 4:
        printf("4. Learning C++ language\n");
        break;
    case 5:
        printf("5. Exit\n");
        break;
    default:
        printf("\n");
        break;
    }
// -----------------------------------------------------

    char item2 = 'b';

    switch(item2) {
    case 'a':
    case 'A':
        printf("Symbol A\n");
        break;
    case 'b':
    case 'B':
        printf("Symbol B\n");
        break;
    case 'c':
    case 'C':
        printf("Symbol C\n");
        break;
    default:
        printf("Incorrect symbol\n");
    }

    return 0;
}