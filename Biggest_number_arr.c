#include <stdio.h>

int main() {
    int  n, biggest;
    

    printf("Enter the size of array: ");
    scanf("%d", &n);

     int a[n];
    printf(" %d elements", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    biggest = a[0];


    for (int i = 1; i < n; i++) {
        if (a[i] > biggest) {
            biggest = a[i];
        }
    }

    printf("\nBiggest number = %d", biggest);

    return 0;
}