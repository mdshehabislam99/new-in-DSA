#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n){
//time complexity is O(n^2) and space complexity is O(n) because of recursion
    if(n == 1)
    {
        return;
    }
    else{
        bool isSwap = false;
        for (int i = 0; i < n - 1; i++)
        {
            if(a[i] > a[i+1]){
                swap(a[i], a[i+1]);
                isSwap = true;
            }
        }
        if(!isSwap)
        {
            return;
        }
        else
        {
            return bubble_sort(a, n - 1);
        }
      
    }
     
}

int  main() {
    
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
     {
        cin >> a[i];
    }
     bubble_sort(a, n);

     for (int i = 0; i < n; i++)
     {
        cout << a[i] << " ";
}}