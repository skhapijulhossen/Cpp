#include <stdio.h>
#include <conio.h>

void InsertionSort(int array[], int len)
{
    int index = 1, curr;
    while (index < len)
    {
        curr = array[index];
        int prev = index - 1;
        while (prev >= 0 && array[prev] > curr)
        {
            array[prev + 1] = array[prev];
            prev--;
        }
        array[prev + 1] = curr;
        index++;
    }
}

int main()
{
    int index = 0, len;
    printf("\nEnter Length Of Data: ");
    scanf("%d", &len);
    int array[len];
    while (index < len && scanf("%d", &array[index]) == 1)
    {
        index++;
    };
    printf("\nAfter InsertionSort(): ");
    InsertionSort(array, len);
    index = 0;
    while (index < len)
    {
        printf("%d ", array[index]);
        index++;
    }
    return 0;
}