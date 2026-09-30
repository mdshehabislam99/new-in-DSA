#include <stdio.h>

#define MAX 100

int stack[MAX];

int top = -1;

void push(int x)
{

    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top] = x;
}

int pop()
{

    if (top == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    int x = stack[top];
    top--;
    return x;
}

int peek()
{

    if (top == -1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top];
}

int isEmpty()
{

    if (top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull()
{

    if (top == MAX - 1)
    {
        return 1;
    }
    return 0;
}

int main()
{

    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        push(x);
    }

    while (!isEmpty())
    {
        printf("%d ", pop());
    }

    return 0;
}