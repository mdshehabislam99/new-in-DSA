#include <iostream>
using namespace std;

bool findElementGreaterThanTwo(int arr[], int n, int &result) {
    if (n < 3) {
        return false;
    }

    // Initialize the three smallest values from the first three elements.
    int smallest = arr[0];
    int second_Smallest = arr[1];
    int third_Smallest = arr[2];

    if (smallest > second_Smallest) swap(smallest, second_Smallest);
    if (second_Smallest > third_Smallest) swap(second_Smallest, third_Smallest);
    if (smallest > second_Smallest) swap(smallest, second_Smallest);

    for (int i = 3; i < n; i++) {
        if (arr[i] < smallest) {
            third_Smallest = second_Smallest;
            second_Smallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < second_Smallest) {
            third_Smallest = second_Smallest;
            second_Smallest = arr[i];
        } else if (arr[i] < third_Smallest) {
            third_Smallest = arr[i];
        }
    }

   // With unique integers, the third-smallest is greater than two elements.
    result = third_Smallest;
    return true;
}

int main() {
    
    int n ;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    
    int result;
    
    if (findElementGreaterThanTwo(arr, n, result)) {
        cout << "Element greater than two elements: " << result << endl;
    } else {
        cout << "No such element found" << endl;
    }
    
    return 0;
}
