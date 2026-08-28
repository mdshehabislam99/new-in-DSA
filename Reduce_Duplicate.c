#include<stdio.h>

int Duplicate_reduce( int a[], int n) {
    int k = 0;

    for (int i = 0; i < n; i++) {
        int duplicate_found = 0;
        for (int j = 0; j < k; j++) {
            if (a[i] == a[j]) {
                duplicate_found = 1;    
                break;
            }
        }
        if (!duplicate_found) {
            a[k++] = a[i];
        }
    }

    return k;
}
int main(){

    int n;
    printf("Enter the number of elements: ");       
    scanf("%d", &n);

    int a[n];
    printf("\nEnter the elements: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int newSize = Duplicate_reduce(a, n);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}