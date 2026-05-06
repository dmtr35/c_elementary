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

typedef struct tag_arr {
    int marks[5];
} tag_arr;

// массив структур struct tag_point figure[max_point];
typedef struct tag_point_2 {
    int x, y, z;
} tag_point_2;

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

    // скопировать структуру все поля
    tag_person p = person;

    person.old = 17;
    strcpy(person.b_data, "25.07.1995");
    printf("old: %d\n", person.old);                                                       // old: 17
    printf("name: %s\n", person.fio.name);                                                 // name: Sergey
    printf("sex: %c, b_date: %s\n", person.sex, person.b_data);                            // sex: M, b_date: 25.07.1995

    printf("sex: %c, b_date: %s\n", p.sex, p.b_data);                                      // sex: M, b_date: 32.07.1925
    
    // printf("%ld\n", sizeof(tag_fio));
    // printf("%ld\n", sizeof(tag_person));
    
    // =======================================================================
    int marks_11[] = {5, 4, 3, 2, 1};
    tag_arr marks_1 = {1, 2, 3, 4, 5};
    printf("%ld, %d\n", sizeof(marks_11), marks_11[0]);
    printf("%ld, %d\n", sizeof(marks_1), marks_1.marks[0]);
    
    tag_arr marks_copy;
    marks_copy = marks_1;
    printf("%ld, %d\n", sizeof(marks_copy), marks_copy.marks[0]);
    // =======================================================================
    

    tag_point_2 tag_point_2[2];
    int figure_point = 0;            // количество заполненых полей в массиве

    tag_point_2[0].x = 1;
    tag_point_2[0].y = 2;
    tag_point_2[0].z = 3;

    tag_point_2[1].x = 4;
    tag_point_2[1].y = 5;
    tag_point_2[1].z = 6;

    figure_point = 2;

    

    return 0;
}