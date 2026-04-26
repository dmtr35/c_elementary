#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // имя массива это указатель на первый элемент
    const int ar_const[] = {};
    // ar_const[0] = 11;                        // assignment of read-only location ‘ar_const[0]’
    // ====================================================
    int ar[] = {4, 3, 2, 1, 5, 6, 7};
    int *ptr = ar;
    // int *ptr = &ar[0];

    printf("%ld\n", sizeof(ar));                // 28
    printf("%ld\n", sizeof(ptr));               // 8

    printf("%p\n", ar);                         // 0x7fffffffdb40
    printf("%p\n", ptr);                        // 0x7fffffffdb40

    printf("%p\n", ar+1);                       // 0x7fffffffdb44
    printf("%p\n", ptr+1);                      // 0x7fffffffdb44

    // printf("%p\n", ar++);                       // lvalue required as increment operand
    printf("%p\n", ++ptr);                      // 0x7fffffffdb44



    int a_0 = *ar;                              // 4          
    int a_4 = *(ptr++);                         // 3
    // int a_4 = *(ar++);                          // lvalue required as increment operand

    *(ptr + 1) = -1;
    ar[2] = -2;
    *(ar + 3) = -3;
    

    for (int i = 0; i < sizeof(ar)/sizeof(*ar); ++i) {
        printf("add = %p, value = %d\n", ar+i, *(ar+i));
    }

    // ============================================================
    
    /* с помощью указателя const мы можем только читать данные по указаному адресу, записывать нельзя */
    const int *ptr_const = ar;          // можем только читать данные
    int *ptr_const2 = ar;               // можем и читать и записывать данные
    // ptr_const[0] = -11;                 //  assignment of read-only location ‘*ptr_const’
    
    ptr_const2[0] = 10;
    int a = ptr_const[0];







    // ============================================================
    
    /* указатель ведет себя как имя указателя на массив, нельзя изменять адрес
    нужно сразу инициализировать, присваивать не сработает*/
    int * const ptr_ar_const = ar;
    // ptr_ar_const++;                      // increment of read-only variable ‘ptr_ar_const’
    ptr_ar_const[0] = -11;
    
    // ============================================================
    /* константный указатель который может только читать значения по определенному адресу */
    const int * const ptr_ar_const_const = ar;
    // ptr_ar_const_const[1] = -66;                    // assignment of read-only location ‘*(ptr_ar_const_const + 4)’
    // ptr_ar_const_const++;                               //increment of read-only variable ‘ptr_ar_const_const’


    return 0;
}