#include <stdio.h>
#include <stdlib.h>     /* malloc, calloc, realloc, free */
#include <string.h>     /* memcpy, memmove */

// stdlib.h:
void* malloc(size_t size);                          // для выделения size байт из кучи
void* calloc(size_t nmemb, size_t size);            // выделяет память заполняя ее нулями
void* realoc(void *ptr, size_t length);             // расширить выделенную область памяти
void free(void* ptr);                               // для освобождения памяти по указателю

// string.h:
void* memcpy(void* restrict dst, const void* restrict src, size_t length);
void* memmove(void* dst, const void* src, size_t length);


int main()
{
    // char *ar = malloc(10);
    // int *ptr_int = malloc(sizeof(int));
    // short *ptr_short = malloc(7 * sizeof(short));
    // free(ar);
    // free(ptr_int);
    // free(ptr_short);
    // ===================================================================

    // Динамический массив

    size_t capacity = 10;
    size_t length = 0;

    short *data = malloc(sizeof(short) * capacity);

    for(int i = 0; i < 50; ++i){
        if(length < capacity){
            data[i] = 'X';
            length++;
        } else {
            capacity *= 2;
            short *data_new = realloc(data, sizeof(short) * capacity);
            
            memcpy(data_new, data, capacity);                       // копируем память с помощью memcpy
            // for(int j = 0; j < capacity / 2; ++j){
            //     data_new[j] = data[j];
            // }

            free(data);
            data = data_new;
            data[i] = 'X';
            length++;
        }
    }

    
    for(int i = 0; i < 50; ++i){
        printf("data[%d]: %d\n", i, data[i]);
    }
    putchar('\n');
}