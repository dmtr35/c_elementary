#include <stdio.h>
#include <stdlib.h>

/*
    char d = 5;
    char *gpt;      // обьявление указателя для работы с данными типа char
    gpt = &d;       // взятие адреса переменной d и присваивание его указателю gpd
    char x = *gpt   // получение значения по адресу переменной d
    *gpt = 100;     // запись значания в ячейку, где расроложена переменная d
*/


// int* prog(int *gpt)
// {
//     int *d = gpt;
//     *d = 50;
//     *gpt = 60;
//     printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, *d);

//     return gpt;
// }

// int main()
// {
//     int d = 10;
//     int *gpt = &d;

//     printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);
    
//     *gpt = 20;
//     printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);
    
//     int *gpt_d2 = prog(gpt);
//     int d2 = *gpt_d2;
//     printf("gpt_d2 = %p, *gpt_d2 = %d, d2 = %d\n", gpt_d2, *gpt_d2, d2);
    
//     gpt++;
//     printf("gpt = %p, *gpt = %d, d = %d\n", gpt, *gpt, d);

    
//     printf("=============================================\n");

//     char arg = 100;
//     char *ptr = &arg;

//     int *ptr_int = ptr;
//     printf("ptr = %p, ptr_int = %p\n", ptr, ptr_int);
//     printf("ptr = %x, ptr_int = %x\n", *ptr, *ptr_int);

//     return 0;
// }




// =============================================================================
// что происходит?
// почему программа может не упасть?
int main() {
    int arr[2] = {1,2};
    int *p = arr;

    *(p + 2) = 999;

    printf("%d %d\n", arr[0], arr[1]);
}
// =============================================================================
// будет 100 или 200?
// void foo(int *a, int *b) {
//     *a = 100;
//     *b = 200;
// }

// int main() {
//     int x = 0;

//     foo(&x, &x);

//     printf("%d\n", x);
// }
// =============================================================================
// что выведется?
// можно ли достать b через a + 1?
// int main() {
//     int *a = malloc(4);
//     int *b = malloc(4);

//     *a = 10;
//     *b = 20;

//     printf("%d\n", *(a + 8));
// }
// =============================================================================
// почему нельзя сделать int *p вместо int **p?

// void alloc(int **p) {
//     *p = malloc(sizeof(int));
//     **p = 42;
// }

// int main() {
//     int *ptr = NULL;

//     alloc(&ptr);

//     printf("%d\n", *ptr);
// }
// =============================================================================

// void inc(int *p) {
//     (*p)++;
// }

// int main() {
//     int x = 5;
//     inc(&x);
//     printf("%d\n", x);
// }

// =============================================================================

// int main() {
//     int x = 10;
//     int *p = &x;

//     printf("%p\n", p);
//     printf("%p\n", (void*)p);
//     printf("%d\n", *(int*)((char*)p + 0));
//     printf("%d\n", *(int*)((char*)p + 1));
//     printf("%d\n", *(int*)((char*)p + 2));
//     printf("%d\n", *(int*)((char*)p + 3));

//     return 0;
// }

// =============================================================================