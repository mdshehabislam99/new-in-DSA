#include<stdio.h>
#include<stdlib.h>

int binary_search(int arr[],int n, int target) {
    
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] > target) {
            end = mid - 1;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            return mid;  // Target found at index mid
        }
    }

   return -1;
}

int main() {
  int n, target;
  scanf("%d", &n);
  int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);

    int result = binary_search(arr, n, target);
    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}