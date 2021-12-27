#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *start = NULL;
    struct node *newnode = NULL;
    struct node *next = NULL;
    struct node *newstart = NULL;
    struct node *pre = NULL;
    int opt, data, position;
    while (1)
    {
        printf("Options:\n #1.Insert Node at Last #2.Insert Node at Begining");
        printf("\n #3.Insert Before a Node.  #4.Insert After a Node.  #5.Show LinkedList");
        printf("\n #6.Delete Last Node.  #7.Delete First Node.  #8.Delete Given Node\n");
        scanf("%d", &opt);
        if (opt != 5 && opt != 6 && opt != 7)
        {
            printf("\n Enter Data: ");
            scanf("%d", &data);
        }
        switch (opt)
        {
        case 0:
            break;
        case 1:
            //Inserting Node at last
            if (start == NULL)
            {
                start = (struct node *)malloc(sizeof(struct node));
                start->data = data;
                start->next = NULL;
            }
            else
            {
                next = start;
                while (next->next != NULL)
                {
                    next = next->next;
                }
                newnode = NULL;
                newnode = (struct node *)malloc(sizeof(struct node));
                newnode->data = data;
                newnode->next = NULL;
                next->next = newnode;
            }
            break;
        case 2:
            // Inserting at the begining
            if (start == NULL)
            {
                start = (struct node *)malloc(sizeof(struct node));
                start->data = data;
                start->next = NULL;
            }
            else
            {
                newstart = (struct node *)malloc(sizeof(struct node));
                newstart->data = data;
                newstart->next = start;
                start = newstart;
            }
            break;
        case 3:
            // INsert before a node
            printf("\n Enter Position: ");
            scanf("%d", &position);
            if (start != NULL)
            {
                if (start->data == position)
                {
                    newstart = (struct node *)malloc(sizeof(struct node));
                    newstart->data = data;
                    newstart->next = start;
                    start = newstart;
                    break;
                }
                next = start;
                while (next->next->data != position)
                {
                    next = next->next;
                }
                newnode = (struct node *)malloc(sizeof(struct node));
                newnode->data = data;
                newnode->next = next->next;
                next->next = newnode;
            }
            else
            {
                printf("Underflow!");
            }
            break;
        case 4:
            // Insert after a node
            printf("\n Enter Position: ");
            scanf("%d", &position);
            if (start != NULL)
            {
                next = start;
                while (next->data != position)
                {
                    next = next->next;
                }
                newnode = (struct node *)malloc(sizeof(struct node));
                newnode->data = data;
                newnode->next = next->next;
                next->next = newnode;
            }
            else
            {
                start->data = data;
            }
            break;
        case 5:
            newnode = start;
            printf("\n List Data: ");
            while (newnode != NULL)
            {
                printf("%d -> ", newnode->data);
                newnode = newnode->next;
            }
            printf("NULL\n");
            break;
        case 6:
            // delete last node
            if (start == NULL)
            {
                printf("UnderFLow!\n");
                break;
            }

            next = start;
            while (next->next != NULL)
            {
                pre = next;
                next = next->next;
            }
            pre->next = NULL;
            free(next);
            break;
        case 7:
            // delete from begining
            if (start == NULL)
            {
                printf("UnderFLow!\n");
                break;
            }
            start = start->next;
            break;
        case 8:
            // delete given node
            if (start == NULL)
            {
                printf("UnderFLow!\n");
                break;
            }

            next = start;
            while (next->data != data)
            {
                pre = next;
                next = next->next;
            }
            pre->next = next->next;
            break;
        default:
            break;
        };
    }
    return 0;
}