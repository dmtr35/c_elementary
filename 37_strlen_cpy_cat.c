#include <stdio.h>
#include <string.h>     /* strcpy, strncpy */

char* strcpy(char* dst, const char* src);
char* strncpy(char* dst, const char* src, size_t max_len);

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

    return 0;
}