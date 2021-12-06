#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void SelectionSort(int array[], int len)
{
    int iter = 0, min_index;
    while (iter < len)
    {
        min_index = iter;
        for (int index = iter + 1; index < len; index++)
        {
            if (array[min_index] > array[index])
            {
                min_index = index;
            }
        }
        int temp;
        temp = array[iter];
        array[iter] = array[min_index];
        array[min_index] = temp;
        // array[iter] = array[iter] + array[min_index];
        // array[min_index] = array[iter] - array[min_index];
        // array[iter] = array[iter] - array[min_index];
        iter++;
    }
}

int main()
{
    int i = 0, len;
    printf("\nEnter Length Of Data: ");
    scanf("%d", &len);
    int array[len];
    while (i < len && scanf("%d", &array[i]) == 1)
    {
        i++;
    };
    printf("\nSelction Sort: ");
    SelectionSort(array, len);
    i = 0;
    while (i < len)
    {
        printf("%d ", array[i]);
        i++;
    }
    return 0;
}