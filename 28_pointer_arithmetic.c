#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Значение указателя меняется на размер типа данных, для которого он определен */
int main()
{
    int g = 4;
    int *ptr = &g;

    printf("ptr = %p\n", ptr);
    
    ptr++;
    printf("ptr = %p\n", ptr);
    
    
    ptr += 3; 
    ptr -= 4; 
    ptr = ptr + 10; 
    ptr = ptr - 9; 
    
    --ptr; 
    ptr++; 
    printf("ptr = %p\n", ptr);
// ======================================================

    short ar[10];
    short *ptr_sh = ar;
    short *p_sh = &ar[3];

    printf("ptr = %p, p = %p\n", (void *)ptr_sh, (void *)p_sh);     // ptr = 0x7fffffffdb50, p = 0x7fffffffdb56

    int res = p_sh - ptr_sh;
    printf("%d\n", res);                                            // 3
    int res2 = (char *)p_sh - (char *)ptr_sh;
    printf("%d\n", res2);                                            // 6
    // ======================================================
    
    int q = 476789;
    char *ptr_q = (char *)&q;
    
    for (int i = 0; i < sizeof(int); i++)
    printf("%x ", *ptr_q++);
    printf("\n");
    // ======================================================

    int r = 476789;
    int *ptr_r = &r;

    printf("%d\n", *ptr_r);
    *ptr_r += 1;
    printf("%d\n", *ptr_r);



    return 0;
}