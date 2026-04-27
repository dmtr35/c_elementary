#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    // копирование массивов
    float func_1[100] = {2.4, -3.8, 0, 10.2, 11.78, -5.43};
    int func_2[50];

    int size_1 = sizeof(func_1) / sizeof(func_1[0]);
    int size_2 = sizeof(func_2) / sizeof(func_2[0]);
    int size = (size_1 < size_2) ? size_1 : size_2;

    for (int i = 0; i < size; ++i)
        func_2[i] = (int)func_1[i];

    // печать
    for (int i = 0; i < size_2; ++i)
        printf("%d ", func_2[i]);
    printf("\n");
    
    // ===================================================================
    // вставить элемент в массив
    int insern_index = 2;
    int num = 555;
    
    for (int i = size_2 - 1; i > insern_index; --i)
        func_2[i] = func_2[i-1];
    func_2[insern_index] = num;
        
    
    // печать
    for (int i = 0; i < size_2; ++i)
        printf("%d ", func_2[i]);
    printf("\n");
    
    // ===================================================================
    // удаление произвольного элемента массива
    int index_del = 2;
    
    for (int i = index_del; i < size_2 - 1; ++i)
        func_2[i] = func_2[i+1];
    
    // печать
    for (int i = 0; i < size_2; ++i)
        printf("%d ", func_2[i]);
    printf("\n");
    
    // ===================================================================
    // сортировка выбором
    int arr[] = {21, 10, 5, 0, -3, -8, -13, 21, 10, 5, 0, -3, -8, -13, 21, 10, 5, 0, -3, -8, -13, 21, 10, 5, 0, -3, -8, -13, 21, 10, 5, 0, -3, -8, -13};
    int size_arr = sizeof(arr)/sizeof(*arr);
    int temp;
    
    clock_t start = clock();
    for (int i = 0; i < size_arr; ++i) {
        for (int j = 1+i; j < size_arr; ++j) {
            if (arr[j] < arr[i]) {                      // знак '<' сортировка от меншего к большему, '>' наоботор
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            } else {
                continue;
            }
        }
    }
    clock_t end = clock();

    double elapsed = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time: %f seconds\n", elapsed);

    // печать
    for (int i = 0; i < size_arr; ++i)
        printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}