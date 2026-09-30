#include<bits/stdc++.h>
using namespace std;

void Insertion_sort1(int a[],int n)
{
   for(int i = 0; i <= n-1; i++){
      int j = i;
      while(j>0 && a[j] < a[j-1]){
        int temp = a[j];
        a[j] = a[j-1];
        a[j-1] = temp;
        j--;
      }

   }
}

void Insertion_sort2(int a[],int n)
{
   for(int i = 1; i < n; i++){
      int curr= a[i];
      int prev = i - 1;
      while(prev >= 0 && a[prev] > curr){
        a[prev + 1] = a[prev];
        prev--;
      }
      a[prev + 1] = curr;

   }
}

void Insertion_sort3(int a[],int n)
{
   for(int j = 2; j < n; j++){
      int key= a[j];
      int i = j - 1;
      while(i >= 0 && a[i] > key){
        a[i + 1] = a[i];
        i = i - 1;
      }
      a[i + 1] = key;

   }
}
 void Recursive_Insertion_sort(int a[],int n){

    if(n <= 1){
        return;
    }

    Recursive_Insertion_sort(a, n-1);

    int last = a[n-1];
    int j = n - 2;
        while (j>=0 && a[j]> last)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = last;
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

    Recursive_Insertion_sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
    