#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};
struct Node *tree = NULL;
struct Node *insert(struct Node *tree, int data)
{
    struct Node *node;
    node = (struct Node *)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    if (tree == NULL)
    {
        return node;
    }
    else if (data < tree->data)
    {
        tree->left = insert(tree->left, data);
    }
    else
    {
        tree->right = insert(tree->left, data);
    }
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
    tree = insert(tree, 8);
    insert(tree, 6);
    insert(tree, 9);
    insert(tree, 3);
    insert(tree, 7);
    insert(tree, 8);
    insert(tree, 10);
    displayIn(tree);
    return 0;
}