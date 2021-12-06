#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};





void displayPre(){
    if(tree == NULL){
        printf("Empty!")
        return;
    }
    printf("%d", tree->data);
    displayPre(tree->left);
    displayPre(tree->right);
}

void displayIn(){
    if(tree == NULL){
        printf("Empty!")
        return;
    }
    displayPre(tree->left);
    printf("%d", tree->data);
    displayPre(tree->right);
}

void displayPost(){
    if(tree == NULL){
        printf("Empty!")
        return;
    }
    displayPre(tree->left);
    displayPre(tree->right);
    printf("%d", tree->data);
}
