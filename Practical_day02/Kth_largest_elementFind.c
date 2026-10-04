#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)//O(k*n)
    {
        scanf("%d", &a[i]);
    } 
    
    scanf("%d", &k);

    // Selection sort - only k passes
    for (int i = 0; i < k; i++)
    {
        int maxIndex = i;

        // Find largest element from remaining array
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[maxIndex])
            {
                maxIndex = j;
            }
        }

        // Swap largest element with a[i]
        int temp = a[i];
        a[i] = a[maxIndex];
        a[maxIndex] = temp;
    }

    printf("%dth largest element = %d\n", k, a[k - 1]);

    return 0;
}