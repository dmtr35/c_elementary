#include <stdio.h>
#include <string.h>            /* strcpy */

/*
    struct[необязательно имя структуры]{
        [пяля структуры];
    }
*/

/*  инициализация структуры
    <тип структуры> <имя реременной> = {[значения полей]}
*/

typedef struct tag_point {
    int x;
    int y;
    int z;
    char m;
    char n;
    double b;
} tag_point;

enum {name_length=50, b_length=20};
typedef struct tag_fio {
    char name[name_length];
    char last[name_length];
} tag_fio;

typedef struct tag_person {
    tag_fio fio;                        // вложеная структура
    char sex;
    unsigned short old;
    char b_data[b_length];
} tag_person;

int main()
{
    tag_point pt = {10, 20, 30, .b = 1.};
    // printf("%ld\n", sizeof(tag_point));
    printf("%ld\n", sizeof(pt));
    
    // pt.x = 11;
    // pt.y = 12;
    // pt.z = 13;
    printf("x = %d, y = %d, z = %d, b = %.2f\n", pt.x, pt.y, pt.z, pt.b);                   // x = 11, y = 12, z = 13, b = 1.00
    // =======================================================================

    tag_person person = {
        {"Sergey", "Balakerev"},
        'M',
        98,
        "32.07.1925"
    };
    person.old = 17;
    strcpy(person.b_data, "25.07.1995");
    printf("old: %d\n", person.old);                                                       // old: 17
    printf("sex: %c, b_date: %s\n", person.sex, person.b_data);                            // sex: M, b_date: 25.07.1995
    printf("name: %s\n", person.fio.name);                                                 // name: Sergey

    printf("%ld\n", sizeof(tag_fio));
    printf("%ld\n", sizeof(tag_person));



    

    return 0;
}