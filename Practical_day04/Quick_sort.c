#include<stdio.h>

int Partition(int a[], int start_index, int end_index){

    int idx = start_index-1;
    int pivot = a[end_index];
    for(int i = start_index; i < end_index; i++){

        if(a[i] >= pivot){

            idx++;
            int temp = a[idx];
            a[idx] = a[i];
            a[i] = temp;

        }

    }
    idx++;
    int temp = a[idx];
    a[idx] = a[end_index];
    a[end_index] = temp;
    return idx;
}

void Quick_sort(int a[], int start_index, int end_index){

    if(start_index < end_index){

        int Pivot_Idx = Partition(a, start_index, end_index);

        Quick_sort(a, start_index, Pivot_Idx - 1);
        Quick_sort(a, Pivot_Idx + 1, end_index);

    }
}

int main(){

    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    Quick_sort(a, 0, n-1);

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    return 0;
}