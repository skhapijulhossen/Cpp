#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *tree = NULL;

void insert(struct Node *tree, int data)
{
    struct Node *node;
    node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;node->left = NULL;node->right = NULL;
    if (tree == NULL)
    {
        tree = node;
    }
    else if (data < tree->data)
    {
        insert(tree->left, data);
    }
    else
    {
        insert(tree->left, data);
    }
}

struct Node *new(int data){
    struct Node *node;
    node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;node->left = NULL;node->right = NULL;
    return node;
}

void displayPre(struct Node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    printf("%d | ", tree->data);
    displayPre(tree->left);
    displayPre(tree->right);
}

void displayIn(struct Node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    displayPre(tree->left);
    printf("%d | ", tree->data);
    displayPre(tree->right);
}

void displayPost(struct Node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    displayPre(tree->left);
    displayPre(tree->right);
    printf("%d | ", tree->data);
}

int main()
{
    // insert(tree, 4);
    // insert(tree, 3);
    // insert(tree, 5);
    // insert(tree, 2);
    // insert(tree, 6);
    struct Node *Tree = NULL;
    Tree = new(4);
    Tree->left = new(2);
    Tree->right = new(8);
    printf("Tree 2 | 4 | 8");
    printf("\n Pre Order\n");
    displayPre(Tree);
    printf("\n POST Order\n");
    displayIn(Tree);
    printf("\n POST Order\n");
    displayPost(Tree);
    return 0;
}
