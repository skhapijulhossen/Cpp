#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void SelectionSort(int array[], int len)
{
    int iter = 0;
    while (iter < len)
    {
        for (int index = iter + 1; index < len; index++)
        {
            if (array[index] < array[iter])
            {
                int temp;
                temp = array[iter];
                array[iter] = array[index];
                array[index] = temp;
            }
        }
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