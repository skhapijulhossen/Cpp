#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};
struct Node *tree = NULL;
struct Node *new (int data)
{
    struct Node *node;
    node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void displayPre(struct Node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    printf(" %d ", tree->data);
    displayPre(tree->left);
    displayPre(tree->right);
}

void displayIn(struct Node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    displayIn(tree->left);
    printf(" %d ", tree->data);
    displayIn(tree->right);
}

void displayPost(struct Node *tree)
{
    if (tree == NULL)
    {
        return;
    }
    displayPost(tree->left);
    displayPost(tree->right);
    printf(" %d ", tree->data);
}

int main()
{
    tree = new (8);
    tree->left = new (6);
    tree->right = new (9);
    tree->left->left = new (3);
    tree->left->right = new (7);
    tree->right->left = new (8);
    tree->right->right = new (10);
    printf("Original Tree\n");
    printf("\n      8");
    printf("\n   6     9");
    printf("\n  3 7   8 10");
    printf("\n Pre-Order: ");
    displayPre(tree);
    printf("\n In-Order:  ");
    displayIn(tree);
    printf("\n PostOrder: ");
    displayPost(tree);
    return 0;
}