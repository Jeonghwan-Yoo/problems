#include <iostream>
#include <climits>

using namespace std;

void findSubarray(int arr[], int n) {
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    
    int right = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        } else if (arr[i] < maxVal) {
            right = i;
        }
    }

    int left = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        } else if (arr[i] > minVal) {
            left = i;
        }
    }

    if (left == -1) {
        cout << "Array is already sorted";
        return;
    }
 
    cout << "Sort array from index " << left << " to " << right;
}

int main() {
    int arr[] = { 1, 3, 2, 7, 5, 6, 4, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findSubarray(arr, n);
 
    return 0;
}
