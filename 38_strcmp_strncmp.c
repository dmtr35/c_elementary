#include <stdio.h>
#include <string.h>         /* strcmp, strncmp, strchr, strrchr, strstr, strpbrk */

/*  возвращает 0 эсли строки равны
    если < 0 то первая строка меньше чем вторая строка
    если > 0 то первая строка больше чем вторая строка
*/
int strcmp(const char* str1, const char* str2);
// задаем скольки символов от начала строки проверяем
int strncmp(const char* str1, const char* str2, size_t max_len);

// выполняет поиск символа слева-направо с кодом val в строке str;
// если символ не найден возвращается NULL
char* strchr(const char* str, int val);
// выполняет поиск символа справа-слево с кодом val в строке str;
char* strrchr(const char* str, int val);

// выполняем поиск слева-направо подстроки find в строке str;
char* strstr(const char* str, const char* find);
// выполняет поиск слева-направо любого символа из подстроки find в строке str;
char* strpbrk(const char* str, const char* find);


int equals(const char *str1, const char *str2)
{
    while (*str1++ && *str2++) {
        if (*str1 != *str2) {
            return -1;
        }
    }
    return 0;
}


int main()
{
    char s1[12] = "Hello1";
    char s2[10] = "Hello";
    char s3[20] = "i learn programming";

    printf("%d\n", equals(s1, s2));
    // -----------------------------------------------------------------------

    int res = strcmp(s1, s2);
    printf("%d\n", res);

    int res2 = strncmp(s1, s2, 1);
    printf("%d\n", res2);
    // ========================================================================
    
    const char *strings[] = {"Ship", "Shopping", "Super"};
    size_t size_strs = sizeof(strings)/sizeof(strings[0]);
    
    for (int i = 0; i < size_strs; ++i)
        if (strncmp(strings[i], "Sh", 2) == 0)
            printf("%s\n", strings[i]);
    // ========================================================================
    
    char *ptr_s1 = strchr(s1, 'l');                                     // поиск первого попавшегося символа 'l' слева-направо
    if (ptr_s1 != NULL)
        printf("%s\n", ptr_s1);                                             // llo1
    
    char *ptr_s2 = strrchr(s1, 'l');                                    // поиск первого попавшегося символа 'l' справа-налево
    if (ptr_s2 != NULL)
        printf("%s\n", ptr_s2);                                             // lo1
    // ========================================================================
    
    char *ptr_s3 = strstr(s3, "learn");                                 // поиск подстроки в строке слева-направо
    if (ptr_s3 != NULL)
        printf("%s\n", ptr_s3);                                             // learn programming
    
    char *ptr_s4 = strpbrk(s3, "poqwt");                                // поиск любого из указаных символов, слева-направо
    if (ptr_s4 != NULL)
        printf("%s\n", ptr_s4);                                             // programming
    
    
    // ========================================================================
    // реверс строки

    char revers_s3_buf[20];
    char *ptr_reserv = s3;
    size_t size_s3 = strlen(s3);
    ptr_reserv += size_s3 - 1;                                          // указатель на последний символ

    for (int i = 0; i < size_s3; ++i) {
        revers_s3_buf[i] = *ptr_reserv--;
    }

    printf("%s\n", revers_s3_buf);                                      // gnimmargorp nrael i


    return 0;
}