#include <stdio.h>

typedef struct tag_vector {
    double x;
    double y;
} tag_vector;

int main()
{
    tag_vector v = {1.0, 2.0};
    tag_vector *ptr_v;
    ptr_v = &v;                                                         // присваиваем адрес переменной v указателю

    (*ptr_v).x = 10;                                                    // записать значение через разыменывание указателя
    double y = (*ptr_v).y;                                              // получить значение через разыменывание указателя
    ptr_v->x = 5.0;

    printf("x = %.2f, y = %.2f\n", v.x, v.y);                           //                               x = 1.00, y = 2.00
    printf("x = %.2f, y = %.2f\n", (*ptr_v).x, (*ptr_v).y);             // через разыменывание указателя x = 1.00, y = 2.00
    printf("x = %.2f, y = %.2f\n", ptr_v->x, ptr_v->y);                 // через указатель               x = 1.00, y = 2.00
    // ==============================================================

    


    return 0;
}