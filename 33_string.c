#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Экранирование и спецсимволы
// escape-последовательности    Код в таблице ASCII     Описание
    // \n                       0x0A                    перевод на новую строку
    // \r                       0x0D                    возврат каретки
    // \t                       0x09                    символ табуляции
    // \'                       0x27                    экранирование апострофа (одинарная кавычка)
    // \"                       0x22                    экранирование двойной кавычки
    // \?                       0x3F                    экранирование вопросительного знака
    // \\                       0x5C                    экранирование обратного слеша
    // \0                       0x00                    сивол конца строки (число 0)
    // \x<число>                                        символ с указаным шестнадцатеричным значением
    // \uxxxx                                           символ с кодом xxxx в кодировке UNICODE (C99)

int main()
{
    char str[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'w', 'o', 'r', 'l', 'd', '!', '\0'};
    char s[] = "Hello, world!";
    char buffer[512] = "Hello, \rworld!";           // возврат каретки

    char b[] = "Hel" "lo"
                ", world" "!";

    char sp[] = "Hello, \
world!";

    char s2[] = "i learn \"C\" language";

    printf("%s\n", str);
    printf("%s\n", s);
    printf("%s\n", buffer);
    printf("%s\n", b);
    printf("%s\n", sp);
    // =========================================================
    
    // const char *str2 = "Hello, world!";                   // неизменяемая область памяти
    char string[] = "Hello, world!";                            // stack
    
    char *ptr = string;
    ptr[0] = 'A';
    
    printf("%p\n", string);
    printf("%p\n", ptr);
    // =========================================================

    char str3[] = "\x61 \x4f";
    puts(str3);                                                 // a O



    return 0;
}