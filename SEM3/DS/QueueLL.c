#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

struct Node enq(){
    int data;
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("\n Enter Data: ");
    scanf("%d", &data);
    new->data = data;
    if (front == NULL){
        new->next = NULL;
        rear = new;
        front = new;
    }
    else{
        new->next = rear;
        rear = new;
    }
}

struct Node deq(){
    int data;
    struct Node *dequeued;
    if (front == NULL){
        printf("\n Queue is Empty!");
    }
    
}

struct Node display(){
    struct Node *element;
    element = front;
    if (element == NULL){
        printf("\n QUeue is Empty!");
    }
    while(element){
        printf(" %d |", element->data);
        element = element->next;
    }
}

int main(){
    enq();
    enq();
    display();
    return 0;
}