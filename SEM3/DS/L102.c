#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void BubbleSort(int array[], int len)
{
    int iter = 0;
    while (iter < len - 1)
    {
        for (int index = 0; index < len - iter - 1; index++)
        {
            if (array[index] > array[index + 1])
            {
                array[index] += array[index + 1];
                array[index + 1] = array[index] - array[index + 1];
                array[index] = array[index] - array[index + 1];
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
    BubbleSort(array, len);
    printf("\nBubble Sort: ");
    i = 0;
    while (i < len)
    {
        printf("%d ", array[i]);
        i++;
    }
    return 0;
}