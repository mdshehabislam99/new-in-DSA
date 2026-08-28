#include <stdio.h>

int main() {
    int n;

    printf("Enter  numbers: ");
    scanf("%d", &n);

    int a[n - 1];

    printf("Enter %d elements:\n", n - 1);

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &a[i]);
    }

    // Sum of numbers from 1 to n
    int total = n * (n + 1) / 2;

    // Subtract the numbers present in the array
    for (int i = 0; i < n - 1; i++) {
        total = total - a[i];
    }

    printf("Missing number = %d\n", total);

    return 0;
}