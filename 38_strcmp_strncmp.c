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
    char s1[12] = "Hezlo1";
    char s2[10] = "Hello";

    printf("%d\n", equals(s1, s2));
    // -----------------------------------------------

    int res = strcmp(s1, s2);
    printf("%d\n", res);

    int res2 = strncmp(s1, s2, 1);
    printf("%d\n", res2);
    // ====================================================

    const char *strings[] = {"Ship", "Shopping", "Super"};
    size_t size_strs = sizeof(strings)/sizeof(strings[0]);

    for (int i = 0; i < size_strs; ++i)
        if (strncmp(strings[i], "Sh", 2) == 0)
            printf("%s\n", strings[i]);



    return 0;
}