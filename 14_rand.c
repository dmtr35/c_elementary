#include <stdio.h>
#include <stdlib.h>                 /* rand */
#include <time.h>                   /* time */

// Псевдо случайный числа
int rand(void);                     /* [0; RAND_MAX]    RAND_MAX >= 2147483647 */
void srand(unsigned int seed);      /* задает начальное значение */
time_t time(time_t * const_Time);   /* возвращает количество секунд для текущего времени */

int main()
{
    time_t t = time(NULL);

    srand(t);

    int range = 10;
    
    int r_1 = rand() % range;           /* [0; range] */
    int r_2 = rand() % range - 5;       /* [-5; range-5] */
    int r_3 = rand() + rand();

    double range_float = (double)rand() / (double)RAND_MAX;     /* [0; 1] */

    printf("%d, %d, %.2f\n", r_1, r_2, range_float);




    return 0;
}