#include <stdio.h>
#include <stdlib.h>

typedef struct tag_vector {
    double x;
    double y;
} tag_vector;

tag_vector* create_vector(double x, double y)
{
    tag_vector *ptr = malloc(sizeof(tag_vector));
    ptr->x = x;
    ptr->y = y;
    return ptr;
}

tag_vector* sum_vector(const tag_vector *one, const tag_vector *two)
{
    tag_vector *res = malloc(sizeof(tag_vector));
    res->x = one->x + two->x;
    res->y = one->y + two->y;
    return res;
}

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
    
    // указатель на выделенную память, в которой будем размещать структуру
    tag_vector *ptr_vector = malloc(sizeof(tag_vector));
    ptr_vector->x = 1.0;
    ptr_vector->y = 2.0;
    
    printf("x = %.2f, y = %.2f\n", ptr_vector->x, ptr_vector->y);
    
    free(ptr_vector);
    // ==============================================================
    
    // функция возвращает указатель на структуру
    tag_vector *one_ptr_vec = create_vector(6.0, 8.0);
    tag_vector *two_ptr_vec = create_vector(7.0, 9.0);
    
    printf("x = %.2f, y = %.2f\n", one_ptr_vec->x, one_ptr_vec->y);
    printf("x = %.2f, y = %.2f\n", two_ptr_vec->x, two_ptr_vec->y);

    free(one_ptr_vec);
    free(two_ptr_vec);
    
    // ==============================================================
    // передаем указатели на структуру
    tag_vector *bias = create_vector(1.22, -3.66);
    tag_vector *one = create_vector(1.0, 1.0);
    tag_vector *result = sum_vector(bias, one);
    tag_vector *result2 = sum_vector(one, &(tag_vector){9.99, -6.66});              // указать указатель напрямую, чтобы не создавать временную переменную

    printf("result_x = %.2f, result_y = %.2f\n", result->x, result->y);
    printf("result2_x = %.2f, result2_y = %.2f\n", result2->x, result2->y);

    free(bias);
    free(one);
    free(result);
    free(result2);



    return 0;
}