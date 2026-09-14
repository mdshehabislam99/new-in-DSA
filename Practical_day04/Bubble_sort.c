#include <stdio.h>

void bubble_sort(int a[], int n)
{

    int flag = 1;

    for (int i = 0; i < n; i++) //1*n 
    //time complexity is O(n^2) and space complexity is O(1)
    {
        for (int j = 0; j < n - i - 1; j++) //n*n
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 0;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
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

    bubble_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}