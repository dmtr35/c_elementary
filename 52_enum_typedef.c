#include <stdio.h>

// enum [необязательный идентификарор] {набор констант};

// red, green, blue это константы типа int
enum colors {red, green, blue};
enum digit {one, two=28};
enum keys {vk_enter=27, vk_space, vk_del=30};

enum {
    go = 0x1f00,
    stop = 0x0001,
    forward = go,
    run = 0x00a2,
    back = run -1
};
// --------------------------------------------------------------

// typedef позволяет задавать пользовательское имя типа
#define PTR_INT int*
typedef int* PTR;
typedef unsigned char BITE;


typedef enum {
    buffer_size = 2048,
    element_size = 12,
    window_size = 400
} SIZE_CONSTS;                                // подменяем тип enum на SIZE_CONSTS

// --------------------------------------------------------------
// подменить тип указателя на функцию
typedef int (*PTR_EVEN)(int);
typedef char (*PTR_AR_2D)[4];

int is_even(int x)
{
    return x % 2 == 0;
}

int main()
{
    printf("red = %d, green = %d, blue = %d\n", red, green, blue);                          // red = 0, green = 1, blue = 2
    printf("one = %d, two = %d\n", one, two);                                               // one = 0, two = 28
    printf("vk_enter = %d, vk_space = %d, vk_del = %d\n", vk_enter, vk_space, vk_del);      // vk_enter = 27, vk_space = 28, vk_del = 30
    // --------------------------------------------------------------
    
    BITE byte;
    int *q, r;
    PTR_INT a, b;                               // указатель только у 'a', из-за обьявления типа через define (int *a, b;)
    PTR ptr_a, ptr_b;                           // оба указатели (int *ptr_a, *ptr_b;)
    // --------------------------------------------------------------
    
    SIZE_CONSTS sizes = window_size;
    printf("%d\n", sizes);
    printf("%d\n", buffer_size);
    // --------------------------------------------------------------
    
    // обычный указатель на функцию:
    int (*func_even)(int);
    func_even = is_even;
    printf("%d\n", func_even(1));
    printf("%d\n", func_even(2));
    
    // через typedef:
    PTR_EVEN ptr_func_even = is_even;
    printf("%d\n", ptr_func_even(3));
    printf("%d\n", ptr_func_even(4));
    
    // --------------------------------------------------------------

    char ar_2d[5][4] = {0};
    PTR_AR_2D ptr_2d = ar_2d;
    ptr_2d[1][2] = 5;
    printf("%d\n", ptr_2d[1][2]);

    return 0;
}