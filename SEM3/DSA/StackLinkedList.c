#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
};

struct Node *top = NULL;

struct Node *push(struct Node *top)
{
    int data;
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("\n Enter Data: ");
    scanf("%d", &data);
    new->data = data;
    if (top)
    {
        new->prev = top;
        top = new;
    }
    else
    {
        new->prev = top;
        top = new;
    }
    return top;
}

struct Node *display(struct Node *top)
{
    struct Node *curr;
    printf("Elements : ");
    if (top)
    {
        curr = top;
        while (curr != NULL)
        {
            printf("->%d", curr->data);
            curr = curr->prev;
        }
        printf("\n");
    }
}

//POP
struct Node *pop(struct Node *top)
{
    int data;
    if (top)
    {
        data = top->data;
        top = top->prev;
    }
    else
    {
        printf("\n STACK EMPTY!");
    }
    printf("\n Popped : %d\n", data);
    return top;
}

struct Node *peek(struct Node *top)
{
    int data;
    if (top)
    {
        data = top->data;
    }
    else
    {
        printf("\n STACK EMPTY!");
    }
    printf("\n Peek : %d\n", data);
    return top;
}

// MAIN
int main()
{
    int option;
    do{
        printf("\n 1: PUSH");
        printf(" || 2: POP");
        printf(" || 3: PEEK");
        printf(" || 4: Display");
        printf(" || 0. to Exit \n => ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            top = push(top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            top = peek(top);
            break;
        case 4:
            display(top);
            break;
        default:
            break;
        }
    }while (option != 0);
    return 0;
}