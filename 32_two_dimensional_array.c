#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    double ar_3D[3][4][5];              // тремерный массив
    short ar_4D[5][2][10][3];            // четырехмерный массив

    double val = ar_3D[1][0][1];
    short res = ar_4D[0][1][5][2];



    char game_pole[3][3] = {1, 2, 3, 4};
    /*
        1 2 3 
        4 0 0 
        0 0 0
    */
//    char game_pole[3][3] = {{1, 2}, {3, 4}};
   /*
        1 2 0 
        3 4 0 
        0 0 0
   */

    size_t bytes = sizeof(game_pole);                                   // 9
    size_t row_bytes = sizeof(game_pole[0]);                            // 3
    size_t rows = sizeof(game_pole)/sizeof(game_pole[0]);               // 3
    size_t cols = sizeof(game_pole[0])/sizeof(game_pole[0][0]);         // 3

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            printf("%d ", game_pole[i][j]);
        printf("\n");
    }

    // ================================================================

    char game2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    char *p_row = game2[1];                                            // обычный указатель, работает как с одномерным массивом
    printf("%d\n", *p_row);                                            // 4
    printf("%d\n", *(p_row - 2));                                      // 2
    
    char (*p_ar)[3] = game2;                                           // указатель на двомерный массив
    // printf("%d\n", *p_ar);                                          // 4
    // printf("%d\n", *(p_ar + 2));                                    // 2

    char x = p_ar[0][1];                                               // 2
    char y = p_ar[1][2];                                               // 6
    printf("%d, %d\n", x, y);                                                 
    printf("%d\n", p_ar[2][2]);                                        // 9                                             



    return 0;
}