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

    int marks[TOTAL_MARKS];
    marks[0] = 4;
    int x = marks[0];
    printf("%d\n", x);
    printf("%ld\n", sizeof(marks));
    printf("%ld\n", sizeof(*marks));
    printf("%ld\n", sizeof(marks[0]));
    for (int i = 0; i < sizeof(marks)/sizeof(*marks); i++)
        printf("%d ", marks[i]);
    printf("\n");

    return 0;
}