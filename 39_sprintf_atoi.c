#include <stdio.h>                    /* sprintf */
#include <string.h>
#include <stdlib.h>                   /* malloc, free */

// работает как printf, но выходной поток заносится в буфер (формирует строки)
int sprintf(char* buffer, const char* format, ...);




int main()
{
    double width = 2.4, height = 0.76, dopth = 3.14;
    const char format[] = "(%s: %.2f x %.2f x %.2f)";                     // .3s вывод не больше 3х символов
    char str_doubles[20]; 
    sprintf(str_doubles, "%.2f%.2f%.2f", width, height, dopth);
    size_t size_doubles = strlen(str_doubles);
    
    char name[] = "Chair";
    const size_t size = strlen(name) + size_doubles + 11; 
    const size_t size2 = size_doubles + 9; 
    char *info = malloc(size);
    char *info2 = malloc(size2);


    sprintf(info, format, name, width, height, dopth);
    sprintf(info2, "(%.2f x %.2f x %.2f)", width, height, dopth);
    printf("%s\n%s\n", info, info2);

    free(info);
    free(info2);
// ======================================================================





    return 0;
}