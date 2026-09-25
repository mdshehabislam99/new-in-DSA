#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void Display(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->link;
    }
}

int main()
{
    struct node *head = NULL;
    struct node *p = NULL;
    struct node *newnode = NULL;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);

        newnode->link = NULL;

        if (head == NULL)
        {
            head = newnode;
            p = newnode;
        }
        else
        {
            p->link = newnode;
            p = newnode;
        }
    }
    Display(head);

    return 0;
}