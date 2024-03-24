#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
    int data;
    struct node *next;
};

void addAtBeg(struct node **head, int e)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));

    if (p == NULL)
    {
        perror("Error : ");
        return;
    }

    p->data = e;
    p->next = *head;
    *head = p;
}

addAtEnd(struct node **head, int e)
{

    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));

    if (p == NULL)
    {
        perror("Error : ");
        return;
    }

    p->data = e;
    p->next = NULL;

    if (*head == NULL)
    {
        *head = p;
    }

    else
    {
        struct node *cur = *head;

        while (cur->next != NULL)
        {
            cur = cur->next;
        }

        cur->next = p;
    }
}

int deleteAtBeg(struct node **head)
{
    struct node *p = *head;
    int e;
    *head = (*head)->next;
    e = p->data;
    free(p);
    return e;
}

int deleteAtEnd(struct node **head)
{
    struct node *cur = *head;
    struct node *prev = NULL;
    int e;

    while (cur->next != NULL)
    {
        prev = cur;
        cur = cur->next;
    }

    e = cur->data;

    if (prev != NULL)
    {
        prev->next = NULL;
    }

    else
    {
        *head = NULL;
    }

    free(cur);
    return e;
}

void displayList(struct node *head)
{
    struct node *cur = head;

    while (cur)
    {
        printf(" %d ", cur->data);
        cur = cur->next;
    }
}

int main()
{
    struct node *head = NULL;

    int ch;
    int e;

    while (1)
    {
        printf("1.ADD AT BEG\n");
        printf("2.ADD AT END\n");
        printf("3.DELETE AT BEG\n");
        printf("4.DELETE AT END\n");

        printf("Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Data : ");
            scanf("%d", &e);

            addAtBeg(&head, e);
            break;

        case 2:
            printf("Enter Data : ");
            scanf("%d", &e);

            addAtEnd(&head, e);
            break;

        case 3:
            if (head == NULL)
                printf("List is Empty\n");

            else
            {
                e = deleteAtBeg(&head);
                printf("%d\n", e);
            }

            break;

        case 4:
            if (head == NULL)
                printf("List is Empty\n");

            else
            {
                e = deleteAtEnd(&head);
                printf("%d\n", e);
            }

            break;

        case 5:
            if (head == NULL)
                printf("List is Empty\n");

            else
            {
                displayList(head);
            }

            break;

        default:
            break;
        }

        printf("------------------------\n");
        displayList(head);
        printf("------------------------\n");
    }

    return 0;
}