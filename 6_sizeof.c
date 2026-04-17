#include <stdio.h>


// sizeof(<тип | имя переменной>);          // int size_float = sizeof(float);
// sizeof <имя переменной>;                 int size_var = sizeof var;


int main()
{
    int var, size;
    int total = 1024, buffer;                   // инициализация переменной
    int dec, hex, oct;
    double d1, d2, d3, d4;

    size = var = 100;                           // присваивание переменной (через копирование)

    dec = 100U;
    hex = 0x1fa;
    oct = 0123;
// ---------------------------------------------------

    char ch, ch2;
    ch = 'd';                                   // символьный летирал
    printf("ch = %c, code = %d\n", ch, ch);
// ---------------------------------------------------

d1 = 10.0f;                                 // float
d2 = -7.;
d3 = 1e2;
d4 = 5e-3;

// ===================================================

    
    int size_float = sizeof(float);
    int size_var = sizeof var;





    return 0;
}


