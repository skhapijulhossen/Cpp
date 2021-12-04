#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int find(int arr[], int data, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == data)
        {
            printf("arr[%d] == %d ->", i, data);
            printf("Found at %d\n", i);
            return i;
        }
    }
    printf("Not Found: -1\n");
    return -1;
}

//
void sort(int arr[], int size)
{
    int min;
    int n = size;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
            {
                min = j;
            }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void deleteAt(int arr[], int pos, int n)
{
    int i;
    for (i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

void insertAt(int arr[], int pos, int data, int n, int max)
{
    int i;
    if (n >= max || pos > max)
    {
        printf("NO Space!");
        return;
    }

    for (i = pos; i < n; i++)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = data;
}

/// Main
int main()
{
    int size, max;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    max = size;
    int arr[size];
    int data;
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter Data: ");
        scanf("%d", &data);
        arr[i] = data;
    }
    int option, element, position;
    printf("\nChoose: 1.Search || 2. Sort || 3.Insert || 4.Delete || -1 to exit\n");
    scanf("%d", &option);
    do
    {
        switch (option)
        {
        case 1:
            printf("\nEnter Data to find: ");
            scanf("%d", &element);
            find(arr, element, size);
            break;
        case 2:
            sort(arr, size);
            printf("After Sorting: ");
            for (int i = 0; i < size; i++)
            {
                printf("%d |", arr[i]);
            }
            break;
        case 3:
            printf("\nEnter Data: ");
            scanf("%d", &data);
            printf("\nEnter Position: ");
            scanf("%d", &position);
            insertAt(arr, element, position, size, max);
            size++;
            for (int i = 0; i < size-1; i++)
            {
                printf("%d |", arr[i]);
            }
            break;
        case 4:
            printf("\nEnter Position: ");
            scanf("%d", &position);
            deleteAt(arr, position, size);
            size--;
            for (int i = 0; i < size-1; i++)
            {
                printf("%d |", arr[i]);
            }
            break;
        default:
            break;
        }
        printf("\nChoose: 1.Search || 2. Sort || 3.Insert || 4.Delete || -1 to exit\n");
        scanf("%d", &option);
    } while (option != -1);
    return 0;
}