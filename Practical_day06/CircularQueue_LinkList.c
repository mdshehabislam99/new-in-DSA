#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value)
{
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    if (rear == NULL)
    {
        front = rear = newNode;
        rear->next = front;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
}

int dequeue()
{
    if (front == NULL)
    {
        return -1;
    }

    int value = front->data;

    if (front == rear)
    {
        free(front);
        front = rear = NULL;
    }
    else
    {
        struct Node *temp = front;

        front = front->next;
        rear->next = front;

        free(temp);
    }

    return value;
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    struct Node *temp = front;

    do
    {
        printf("%d ", temp->data);
        temp = temp->next;

    } while (temp != front);

    printf("\n");
}

int main()
{
    int n, value;
    scanf("%d", &n);

    // Enqueue input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &value);

        enqueue(value);
    }

    printf("Queue: ");
    display();

    // Dequeue one element
    value = dequeue();

    if (value != -1)
    {
        printf("Deleted: %d\n", value);
    }

    printf("Queue after dequeue: ");
    display();

    return 0;
}