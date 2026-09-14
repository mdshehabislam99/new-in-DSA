#include<bits/stdc++.h>
using namespace std;    

void Selection_sort(int a[], int n){

    for (int i = 0; i < n-1; i++)
    {
        int smallestIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if(a[j] < a[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(a[i], a[smallestIdx]);
    }
    
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Selection_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}