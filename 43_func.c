#include <stdio.h>
#include <string.h>                 /* strcmp */

void swap_2(int *a, int *b)
{
    int buf = *a;
    *a = *b;
    *b = buf;
}

int sum_ar(const int arr[], int length)      // const int *arr = const int arr[]
{
    int res = 0;
    for (int i = 0; i < length; ++i) {
        res += arr[i];
    }
    return res;
}

const char* find_space(const char *buf)
{
    while(*buf != '\0') {
        if (*buf == ' ')
            return buf;
        buf++;
    }
}

void show_ar2D(const short (*ar)[3], int row)   /* обозначение двумерного массива в качестве аргумента */
{
    for(int i = 0; i < row; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d ", ar[i][j]);
        }
        putchar('\n');
    }
}



int main()
{
    int x = 5, y = 10;

    printf("x = %d, y = %d\n", x, y);
    swap_2(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    // -----------------------------------------
    
    int ar[] = {1, 2, 3, 4, 5};
    int res = sum_ar(ar, sizeof(ar) / sizeof(*ar));
    
    printf("res = %d\n", res);
    // -----------------------------------------
    
    char string[] = "Hello world!";
    const char* res_str = find_space(string);
    
    printf("%s\n", res_str);
    // -----------------------------------------

    // передаем многомерный массив в функцию
    short ar2D[][3] = {{1, 2, 3}, {4, 5, 6}};
    show_ar2D(ar2D, sizeof(ar2D) / sizeof(*ar2D));


    return 0;
}
