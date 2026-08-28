#include<stdio.h>


int repeated_number(int a[], int n) {
   
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                repeated = a[i];
                break;
            }
        }
        if (repeated != -1) {
            break;
        }
    }

    return repeated;
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
    int result = repeated_number(a, n);
  printf("Repeated number: %d\n", result);

    return 0;
}