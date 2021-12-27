#include <stdio.h>
#include<conio.h>

void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
    
}

void heapify(int array[], int len, int i)
{
    int max = i;
    int l = (2 * i) + 1;
    int r = (2 * i) + 2;
    if (l < len && array[l] > array[max])
        max = l;
    if (r < len && array[r] > array[max])
        max = r;
    if (max != i)
    {
        swap(&array[i], &array[max]);
        heapify(array, len, max);
    }
}
void HeapSort(int array[], int len)
{
    for (int i = len / 2 - 1; i >= 0; i--)
        heapify(array, len, i);
    for (int i = len - 1; i >= 0; i--)
    {
        swap(&array[0], &array[i]);
        heapify(array, i, 0);
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
    printf("\nAfter HeapSort(): ");
    HeapSort(array, len);
    i = 0;
    while (i < len)
    {
        printf("%d ", array[i]);
        i++;
    }
    return 0;
}
