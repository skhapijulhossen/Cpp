#include<stdio.h>
#include<conio.h>
#include<stdio.h>


struct Node{
    int data;
    struct Node *left,*right;
}

struct Node *tree = NULL;

struct Node *insert(struct Node *tree,int data){
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    if (tree != NULL)
    {
        tree = temp;
        return tree;
    }
    else{
        if (data >= tree->data)
        {
            return insert(tree->right, data);
        }
        else{
            return insert(tree->left, data);
        }
    }
}

void display(struct Node *tree){
    while (tree)
    {
        display(tree->left);
        printf(" %d |", tree->data);
        display(tree->right);
    }
    
}

//
int main(){
    tree = insert(tree,3);
    tree = insert(tree,2);
    tree = insert(tree,4);
    display(tree);
    return 0;
}