#include <stdio.h>

void Slection_sort(int a[], int n)
{

    for (int i = n - 1; i > 0; i--)
    {
        int largest = a[0];
        int largest_index = 0;
        for (int j = 1; j <= i; j++)
        {
            if (a[j] > largest)
            {
                largest = a[j];
                largest_index = j;
            }
        }
        // Swap the largest element with the last element
        int temp = a[i];
        a[i] = a[largest_index];
        a[largest_index] = temp;
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

    Slection_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}