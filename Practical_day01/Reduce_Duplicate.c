#include <stdio.h>

int Duplicate_reduce(int a[], int n)
{

    int new_arr = 0;
    for (int i = 0; i < n; i++)
    {

        int flag = 0;

        for (int j = 0; j < new_arr; j++)//O(n^2)
        {
            if (a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            a[new_arr] = a[i];
            new_arr++;
        }
    }

    return new_arr;
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

    int newSize = Duplicate_reduce(a, n);

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}