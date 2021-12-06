#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *start = NULL;

struct Node *insertEnd(struct Node *start, int data)
{
   
    struct Node *temp, *trav;
    temp = (struct Node*)malloc(sizeof(struct Node *));
    temp->prev = NULL;
    temp->next = NULL;
    temp->data = data;
    temp->next = NULL;
    trav = start;
 
    // If start is NULL
    if (start == NULL) {
 
        start = temp;
    }
 
    // Changes Links
    else {
        while (trav->next != NULL)
            trav = trav->next;
        temp->prev = trav;
        trav->next = temp;
    }
}


struct Node *Create(struct Node *start){
    int num;
    printf("\n Enter Data or -1 to end: ");
    scanf("%d", &num);
    while(num != -1){
        insertEnd(start, num);
        printf("\n Enter Data or -1 to end: ");
        scanf("%d", &num);
    }
    return start;
}


struct Node *display(struct Node *start)
{
    struct Node *curr;
    if (start == NULL) {
        printf("\nList is empty\n");
        return start;
    }
    curr = start;
    printf("\n");
    while (curr)
    {
        printf("%d->", curr->data);
        curr = curr->next;
    }
}


int main(){
    start = Create(start);
    display(start);
    return 0;
}