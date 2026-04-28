#include <stdio.h>

int main()
{
    // char sp[] = "Hello, ";
    // printf("%s\n", sp);
    // puts(sp);

    // char bf[10];
    // scanf("%9s" ,bf);           // читать из входного потока максимум 9 символов (на один меньше буфера для '\0') также превывоет чтение от пробела, \t и \n
    // printf("%s\n", bf);         // hello_wor
    // puts(bf);                   // hello_wor
    // ===================================================
    
    // char bf2[10];
    // char bf3[10];
    // fgets(bf2, sizeof(bf2), stdin);
    // fgets(bf3, sizeof(bf2), stdin);
    // printf("%s\n", bf2);         // hello_wor
    // printf("%s\n", bf3);         // hello_wor
    // ===================================================

    char bf4[10];
    int max_len = sizeof(bf4), i = 0;
    char *ptr = bf4, ch;

    while ((ch = getchar()) != '\n' && ch != EOF && i < max_len-1)
        ptr[i++] = ch;
    
    ptr[i] = '\0';
    puts(bf4);
    
    return 0;
}