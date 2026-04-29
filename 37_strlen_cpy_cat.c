#include <stdio.h>
#include <string.h>     /* strcpy, strncpy,strlen, strcat, strncat */

char* strcpy(char* dst, const char* src);
char* strncpy(char* dst, const char* src, size_t max_len);

size_t strlen(const char* buf);

char* strcat (char* dest, const char* src);
char* strncat (char* dest, const char* src, size_t max_add);

int main() 
{
    // копировать строки вручную
    char source[14] = "Source string";
    char destination[10];

    // const char *src = source;
    // char *dst = destination;
    // int max_len_copy = sizeof(destination);
    
    // while (*src != 0 && max_len_copy-- > 1)
    // *dst++ = *src++;
    // *dst = '\0';
    
    // puts(destination);                          // Source st
    // ================================================================
    
    // char *dst = destination;
    // const char *src = source;
    
    size_t max_len = sizeof(destination) - 1;
    // strcpy(destination, source);
    strncpy(destination, source, max_len);
    destination[max_len] = '\0';
    
    puts(destination);
    // ================================================================
    
    // вычисляем длину строки вручную
    char string[100] = "length of the string";
    
    char *start = string, *end = string;
    size_t leng = 0;
    
    while (*end++) {
        leng++;
    }
    printf("%ld\n", leng);                                  // 20
    
    leng = strlen(string);
    printf("%ld\n", leng);                                  // 20
    
    // ================================================================
    
    // Конкатенация строк

    char str_cat[100] = "Sergey";
    char str[15] = "Balakirev";

    strcat(str_cat, str);
    printf("%s", str_cat);
    printf("\n");
    
    int qq = sizeof(str);
    int ww = strlen(str);
    size_t max_add = sizeof(str) - strlen(str) - 1;
    
    strncat(str, str_cat, max_add);
    str[sizeof(str) - 1] = '\0';
    printf("%s\n", str);






    return 0;
}