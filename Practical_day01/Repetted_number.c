#include <stdio.h>
int repeated_number(int a[], int n)
{

    int flag = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)//O(n^2)
        {
            if (a[i] == a[j])
            {
                flag = a[i];
                break;
            }
        }
        if (flag != 0)
        {
            break;
        }
    }

    return flag;
}


int main()
{
    int n;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int result = repeated_number(a, n);
    printf("Repeated number: %d\n", result);

    return 0;
}