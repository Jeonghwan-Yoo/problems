#include <iostream>
#include <algorithm>

using namespace std;

int findMaxProduct(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    int maxProduct = arr[0];
    for (int i = 0; i < n - 1; i++) {
        int product = arr[i];
        if (maxProduct < product) {
            maxProduct = product;
        }
        for (int j = i + 1; j < n; j++) {
            product *= arr[j];
            if (maxProduct < product) {
                maxProduct = product;
            }
        }
    }
    return maxProduct;
}

int findMaxProduct2(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }

    int currentMaxProduct = arr[0];
    int currentMinProduct = arr[0];
    int maxProduct = arr[0];
    for (int i = 1; i < n; i++) {
        int tempCurrentMaxProduct = currentMaxProduct;
        currentMaxProduct = max({ arr[i], currentMaxProduct * arr[i], currentMinProduct * arr[i] });
        currentMinProduct = min({ arr[i], tempCurrentMaxProduct * arr[i], currentMinProduct * arr[i] });

        maxProduct = max(maxProduct, currentMaxProduct);
    }
    return maxProduct;
}

int main() {
    int arr[] = { -6, 4, -5, 8, -10, 0, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    printf("The maximum product of a subarray is %d", findMaxProduct2(arr, n));
 
    return 0;
}