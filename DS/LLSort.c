#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *start = NULL;
//
struct Node *create_ll(struct Node *start)
{
    struct Node *new, *curr;
    int num;
    printf("\n Enter Data or -1 to end: ");
    scanf("%d", &num);
    while (num != -1)
    {
        new = (struct Node *)malloc(sizeof(struct Node *));
        new->data = num;
        if (start == NULL)
        {
            start = new;
            new->next = NULL;
        }
        else
        {
            curr = start;
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = new;
            new->next = NULL;
        }
        printf("\n Enter Data or -1 to end: ");
        scanf("%d", &num);
    }
    return start;
}
//
struct Node *display(struct Node *start)
{
    struct Node *curr;
    curr = start;
    printf("\n Elements: ");
    while (curr->next != NULL)
    {
        printf("%d->", curr->data);
        curr = curr->next;
    }
    printf("%d->", curr->data);
}

struct Node *sort(struct Node *start)
{
    struct Node *curr, *pre;
    struct Node *last = NULL;
    int any_swapping = 0;
    if(start ==NULL){
        return start;
    }
    do
    {
        any_swapping = 0;
        curr = start;
        while (curr->next != last)
        {
            pre = curr;
            curr = curr->next;
            if (pre->data > curr->data)
            {
                int data = pre->data;
                pre->data = curr->data;
                curr->data = data;
                any_swapping = 1;
            }
        }
        last = curr;
    } while (any_swapping);
    return start;
}
struct Node *deleteL(struct Node *start)
{
    start = NULL;
    return start;
}

int main()
{
    int option;
    printf("\n 1: Create a list");
    start = create_ll(start);
    printf(" || 3: After Sorting: ");
    start = sort(start);
    display(start);
    printf("\n 4: Deleted List: ");
    start = deleteL(start);
    display(start);
    return 0;
}
