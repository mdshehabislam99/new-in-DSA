#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int isCyclic(struct node *head)
{
    struct node *slow = head;
    struct node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return 1; 
        }
    }

    return 0; 
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

        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            p = newnode;
        }
        else
        {
            p->next = newnode;
            p = newnode;
        }
    }

    int result = isCyclic(head);
    if (result)
    {
        printf("The linked list is cyclic.\n");
    }
    else
    {
        printf("The linked list is not cyclic.\n");
    }

    return 0;
}