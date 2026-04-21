#include <stdio.h>

/*
    char d = 5;
    char *gpt;      // обьявление указателя для работы с данными типа char
    gpt = &d;       // взятие адреса переменной d и присваивание его указателю gpd
    char x = *gpt   // получение значения по адресу переменной d
    *gpt = 100;     // запись значания в ячейку, где расроложена переменная d
*/


int* prog(int *gpt)
{
    int *d = gpt;
    *d = 50;
    *gpt = 60;
    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, *d);

    return gpt;
}

int main()
{
    int d = 10;
    int *gpt = &d;

    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);
    
    *gpt = 20;
    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);
    
    int *gpt_d2 = prog(gpt);
    int d2 = *gpt_d2;
    printf("gpt_d2 = %p, *gpt_d2 = %d, d2 = %d\n", gpt_d2, *gpt_d2, d2);
    
    gpt++;
    printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);

    
    printf("=============================================\n");

    char arg = 100;
    char *ptr = &arg;

    int *ptr_int = ptr;
    printf("ptr = %p, ptr_int = %p\n", ptr, ptr_int);
    printf("ptr = %x, ptr_int = %x\n", *ptr, *ptr_int);

    return 0;
}