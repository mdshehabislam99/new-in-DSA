#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

int CountNodes(struct node *head)
{
    int count = 0;
    struct node *p = head;
    while (p != NULL)
    {
        count++;
        p = p->link;
    }
    return count;
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
    int totalNodes = CountNodes(head);
    printf("%d\n", totalNodes);

    return 0;
}