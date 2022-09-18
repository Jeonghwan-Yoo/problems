#include <iostream>
#include <climits>

using namespace std;

void kadane(int arr[], int n) {
    if (n <= 0) {
        return;
    }

    int sum = 0;
    int maxSum = INT_MIN;
    int startTmp = 0;
    int start = 0;
    int end = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum < arr[i]) {
            sum = arr[i];
            startTmp = i;
        }
        if (maxSum < sum) {
            maxSum = sum;
            start = startTmp;
            end = i;
        }
    }
    cout << "The contiguous subarray with the largest sum is ";
    for (int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    kadane(arr, n);
 
    return 0;
}