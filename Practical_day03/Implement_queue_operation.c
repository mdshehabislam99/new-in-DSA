#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full\n");
        return;
    }

    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }

    queue[rear] = value;
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("%d dequeued from queue\n", queue[front]);

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main()
{
  int n, val;
  scanf("%d",&n);

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &val);
    enqueue(val);
  }
  display();
  dequeue();
  display();

   return 0;
}