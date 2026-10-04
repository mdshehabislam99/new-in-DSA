#include <stdio.h>
int main()
{
    int n, Largest1, Largest2;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    Largest1 = a[0];
    Largest2 = a[1];

    for (int i = 1; i < n; i++) //O(n)
    {

        if (a[i] > Largest1)
        {
            Largest2 = Largest1;
            Largest1 = a[i];
        }

        else if (a[i] > Largest2 && a[i] != Largest1)
        {
            Largest2 = a[i];
        }
    }

    printf("\nThe second Largest element is: %d", Largest2);
    return 0;
}