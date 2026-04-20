#include <stdio.h>
#include <stdio.h>

#define FIVE    5
#define TEN     2 * FIVE
#undef  TEN                                     // отменить макрос -> #undef
#define TEN     20
#define TEXT    "Text message in one line"
#define TEXT2   "Text message in \
one line"
#define PRINT_D printf("digit = %d\n", digit) 
#define FORMAT  "digit = %d\n"

#define SQ_RP(A, B) ((A) * (B))

// # - превращает ликсему в строку
#define TEXT3(A, B)  "Square of rectangle (" #A ") x (" #B ")\n"
// ## склеивает текст 
#define X_N(N)  x ## N

int main()
{
    int digit = FIVE;
    PRINT_D;

    digit = TEN;
    printf(FORMAT, digit);
    printf(TEXT "\n");
    printf(TEXT2 "\n");
// =======================================================================

    int x =10, y =20;
    int res = SQ_RP(x+2, y-3);                      // ((x+2) * (y-3))
    printf(TEXT3(x-2, y-3));                        // Square of rectangle (x-2) x (y-3)
// =======================================================================

    int x1 = 1, x2 = -2, x4 = 10;
    printf("%d\n", X_N(4));                         // было подставлено 'x4'





    return 0;
}