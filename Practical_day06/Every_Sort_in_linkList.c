#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insert(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void selectionSort()
{
    struct Node *i, *j;
    int temp;

    for (i = head; i != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

void bubbleSort()
{
    struct Node *i, *j;
    int temp;
    int swapped;

    if (head == NULL)
        return;

    do
    {
        swapped = 0;
        for (i = head; i->next != NULL; i = i->next)
        {
            if (i->data > i->next->data)
            {
                temp = i->data;
                i->data = i->next->data;
                i->next->data = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}

void insertionSort()
{
    struct Node *sorted = NULL;
    struct Node *current = head;

    while (current != NULL)
    {
        struct Node *next = current->next;

        if (sorted == NULL || sorted->data >= current->data)
        {
            current->next = sorted;
            sorted = current;
        }
        else
        {
            struct Node *temp = sorted;
            while (temp->next != NULL && temp->next->data < current->data)
            {
                temp = temp->next;
            }
            current->next = temp->next;
            temp->next = current;
        }

        current = next;
    }

    head = sorted;
}

void QuickSort(struct Node *start, struct Node *end)
{
    if (start == NULL || start == end || start == end->next)
        return;

    struct Node *pivot = start;
    struct Node *i = start;
    struct Node *j = start->next;

    while (j != end->next)
    {
        if (j->data < pivot->data)
        {
            i = i->next;
            int temp = i->data;
            i->data = j->data;
            j->data = temp;
        }
        j = j->next;
    }

    int temp = pivot->data;
    pivot->data = i->data;
    i->data = temp;

    QuickSort(start, i);
    QuickSort(i->next, end);
}

void display()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    int n, value;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);
        insert(value);
    }

    printf("Original List: ");
    display();

    selectionSort();

    printf("Sorted List: ");
    display();

    return 0;
}