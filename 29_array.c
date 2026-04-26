#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE_BUFFER 1024
#define TOTAL_MARKS 13
int main()
{
    // правильное обьявление массивов:
    // double f[30];
    // char buffer[SIZE_BUFFER];
    // int marks[13];
    // short ar[8 * 5];
    // char bytes[sizeof(double)];
// ===================================================

    int marks[TOTAL_MARKS] = {0};
    
    marks[0] = 4;
    int x = marks[0];
    // printf("%d\n", x);
    // printf("%ld\n", sizeof(marks));
    // printf("%ld\n", sizeof(*marks));
    // printf("%ld\n", sizeof(marks[0]));
    for (int i = 0; i < sizeof(marks)/sizeof(*marks); i++)
        printf("%d ", marks[i]);
    printf("\n");
    // ===================================================
    
    int corrds[]= {10, 20 ,30};                                 // не указываем размер, потому что инициализировали 3 элемента
    short digits[10] = {-1, [2] = 65, 18, [9] = -1};            // начиная с c99    // -1 0 65 18 0 0 0 0 0 -1
    
    for (int i = 0; i < sizeof(digits)/sizeof(digits[0]); ++i)
        printf("%d ", digits[i]);
    printf("\n");

    
    return 0;
}