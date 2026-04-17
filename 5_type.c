#include <stdio.h>
#include <stdlib.h>


// Тип данных           Для 16x     Для 32x     Для 64x     Описание                         Диапазон
// char                 1           1           1           Символьный и целочисленный       [0;255] или [-128;127]
// short [int]          2           2           2           Целочисленный                    [-32768;32767]
// int                  2           4           4           Целочисленный                    [-32768;32767] или [-2147483648;2147483648]
// long [int]           4           4           8           Целочисленный                    ...
// long long [int]      8           8           8           Целочисленный                    ...
// float                4           4           4           Вещественный                     ...
// double               8           8           8           Вещественный                     ...
// long double          10          10          10          Вещественный                     ...

// char <= short <= int <= long <= long long
//      float <= double <= long double


int main()
{
    char byte_memory;                       // для переносимости указывать явно signed char (только для char)
    unsigned char byte_memory_un;
    byte_memory = 255;
    byte_memory_un = 255;

    printf("%d\n", byte_memory);            // -1
    printf("%d\n", byte_memory_un);         // 255

    return 0;
}

