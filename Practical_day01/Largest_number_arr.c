#include <stdio.h>

int main() {
    int  n, large_num;
    

    printf("Enter the size of array: ");
    scanf("%d", &n);

     int a[n];
    printf(" %d elements", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    large_num = a[0];


    for (int i = 1; i < n; i++) {
        if (a[i] > large_num
) {
            large_num
     = a[i];
        }
    }

    printf("\nlarge number = %d", large_num);

    return 0;
}