#include <stdio.h>
#include <stdbool.h>

/* true = 1, false = 0*/

// Опецации сравнения
// ==                  Сравнение на равенство
// !=                  Сравнение на неравентсво
// <                   Сравнение на меньше
// >                   Сравнение на больше
// <=                  Сравнение на меньше или равно
// >=                  Сравнение на больше или равно

int main()
{
    // _Bool fl_view = 0;
    bool fl_view = false;
    printf("Size of _Bool %ld, fl_view %d\n", sizeof(_Bool), fl_view);

    if (1) printf("true\n");
    if (0) printf("false\n");


    return 0;
}