#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

// Find middle node
struct node* Middle(struct node *start, struct node *end)
{
    struct node *slow = start;
    struct node *fast = start;

    while (fast != end && fast->link != end)
    {
        slow = slow->link;
        fast = fast->link->link;
    }

    return slow;
}

// Binary search
int BinarySearch(struct node *head, int key)
{
    struct node *start = head;
    struct node *end = NULL;

    while (start != end)
    {
        struct node *mid = Middle(start, end);

        if (mid->data == key)
        {
            return 1;
        }

        if (mid->data < key)
        {
            start = mid->link;
        }
        else
        {
            end = mid;
        }
    }

    return 0;
}

int main()
{
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *newnode;

    int data;
    int key;
    int count;

    // Number of nodes
    scanf("%d", &count);

    // Create linked list
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &data);

        newnode = (struct node *)malloc(sizeof(struct node));

        newnode->data = data;
        newnode->link = NULL;

        if (head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->link = newnode;
            temp = newnode;
        }
    }

    // Value to search
    scanf("%d", &key);

    if (BinarySearch(head, key))
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}