#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int x, int top_param, int stack[]) //O(1)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    stack[top] = x;
}

int pop(int top_param, int stack[])
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

int main()
{
    push(1, top, stack);
    push(2, top, stack);
    printf("%d\n", pop(top, stack));   // 2
    push(3, top, stack);               // push AFTER pop
    printf("%d\n", pop(top, stack));   // 3
    printf("%d\n", pop(top, stack));   // 1
    
    return 0;
}