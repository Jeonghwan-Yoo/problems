#include <iostream>
#include <algorithm>

using namespace std;

void findMaximumProduct(int arr[], int n) {
    if (n < 2) {
        return;
    }

    int maxinumProduct = INT_MIN;
    int index1 = 0;
    int index2 = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int product = arr[i] * arr[j];
            if (maxinumProduct < product) {
                maxinumProduct = product;
                index1 = i;
                index2 = j;
            }
        }
    }

    printf("Pair is (%d, %d)\n", arr[index1], arr[index2]);
}

// Using sort
void findMaximumProduct2(int arr[], int n) {
    if (n < 2) {
        return;
    }

    sort(arr, arr + n);

    int maximumProduct1 = arr[0] * arr[1];
    int maximumProduct2 = arr[n - 2] * arr[n - 1];
    if (maximumProduct1 < maximumProduct2) {
        printf("Pair is (%d, %d)\n", arr[0], arr[1]);
    } else {
        printf("Pair is (%d, %d)\n", arr[n - 2], arr[n - 1]);
    }
}

void findMaximumProduct3(int arr[], int n) {
    if (n < 2) {
        return;
    }

    int max1 = arr[0];
    int max2 = INT_MIN;
    int min1 = arr[0];
    int min2 = INT_MAX;

    for (int i = 1; i < n; i++) {
        int val = arr[i];
        if (max1 < val) {
            max2 = max1;
            max1 = val;
        } else if (max2 < val) {
            max2 = val;
        }

        if (min1 > val) {
            min2 = min1;
            min1 = val;
        } else if (min2 > val) {
            min2 = val;
        }
    }

    if (max1 * max2 > min1 * min2) {
        printf("Pair is (%d, %d)\n", max1, max2);
    } else {
        printf("Pair is (%d, %d)\n", min1, min2);
    }
}

int main() {
    int arr[] = { -10, -3, 5, 6, -2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMaximumProduct(arr, n);
    findMaximumProduct2(arr, n);
    findMaximumProduct3(arr, n);
    
    return 0;
}