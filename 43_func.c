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

    return 0;
}
