#include<stdio.h>

int DisplayNumbers(int n)
{
    for(int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}
    



int main()
{
    int n;
    scanf("%d", &n);
    int result = DisplayNumbers(n);
    printf("%d\n", result);
    return 0;
}