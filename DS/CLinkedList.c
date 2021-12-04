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
            new->next = start;
        }
        else
        {
            curr = start;
            while (curr->next != start)
            {
                curr = curr->next;
            }
            curr->next = new;
            new->next = start;
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
    printf("\n");
    while (curr->next != start)
    {
        printf("%d->", curr->data);
        curr = curr->next;
    }
    printf("%d->", curr->data);
}
//
struct Node *insert_beg(struct Node *start)
{
    struct Node *new, *curr;
    int num;
    printf("\n Enter Data To Insert in Begining: ");
    scanf("%d", &num);
    new = (struct Node *)malloc(sizeof(struct Node *));
    new->data = num;
    new->next = start;
    curr = start;
    while (curr->next != start)
    {
        curr = curr->next;
    }
    curr->next = new;
    return new;
}

//
struct Node *insert_before(struct Node *start)
{
    struct Node *new, *curr, *pre;
    int num, pos;
    printf("\n Enter Data: ");
    scanf("%d", &num);
    printf("\n Enter Node: ");
    scanf("%d", &pos);
    new = (struct Node *)malloc(sizeof(struct Node *));
    new->data = num;
    if (start == NULL)
    {
        printf("Empty!");
        return start;
    }
    curr = start;
    while (curr->data != pos)
    {
        pre = curr;
        curr = curr->next;
    }
    pre->next = new;
    new->next = curr;
    return start;
}
//
struct Node *delete_end(struct Node *start)
{
    struct Node *new, *curr, *pre;
    if (start == NULL)
    {
        printf("Empty!");
        return start;
    }
    curr = start;
    while (curr->next != start)
    {
        pre = curr;
        curr = curr->next;
    }
    pre->next = start;
    free(curr);
    return start;
}
struct Node *delete_after(struct Node *start)
{
    struct Node *new, *curr, *pre;
    int num, pos;
    printf("\n Enter Node: ");
    scanf("%d", &num);
    if (start == NULL)
    {
        printf("Empty!");
        return start;
    }
    curr = start;
    while ((curr->next != start) && (curr->data != num))
    {
        pre = curr;
        curr = curr->next;
    }
    curr = curr->next;
    pre = pre->next;
    pre->next = curr->next;
    free(curr);
    return start;
}

int main()
{
    int option;
    do
    {
        printf("\n 1: Create a list");
        printf(" || 2: Display the list");
        printf(" || 3: Add a node at the beginning");

        printf("\n 4: Add a node before a given node");
        printf(" || 5: Delete a node from the end");
        printf(" || 6: Delete a node after a given node");
        printf(" || 7: EXIT");
        printf("\n\n Choose Option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            start = create_ll(start);
            printf("\n LINKED LIST CREATED");
            break;
        case 2:
            display(start);
            break;
        case 3:
            start = insert_beg(start);
            break;
        case 4:
            start = insert_before(start);
            break;
        case 5:
            start = delete_end(start);
            break;
        case 6:
            start = delete_after(start);
            break;
        }
    } while (option != 7);

    return 0;
}
