#include <stdio.h>
#include <conio.h>

void Merge(int array[], int beg, int mid, int end)
{
    int left = beg, right = mid + 1;
    int index = 0;
    int tempArr[end + beg];
    while (left < mid && right < end)
    {
        if (array[index] < array[right])
        {
            tempArr[index] = array[left];
            left++;
        }
        else
        {
            tempArr[index] = array[left];
            right++;
        }
        index++;
    }
    index = 0;
    int toIndex = beg;
    while (index < (end - beg + 1))
    {
        array[toIndex] = tempArr[index];
        index++;
        toIndex++;
    }
}

void mergeSort(int array[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(array, beg, mid);
        mergeSort(array, mid + 1, end);
        Merge(array, beg, mid, end);
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
    printf("\nAfter MergeSort(): ");
    mergeSort(array, 0, len);
    i = 0;
    while (i < len)
    {
        printf("%d ", array[i]);
        i++;
    }
    return 0;
}