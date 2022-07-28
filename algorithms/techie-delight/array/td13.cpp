#include <iostream>

using namespace std;

void swap(int arr[], int a, int b) {
    int tmp = arr[a];
    arr[a] = arr[b];
    arr[b] = tmp;
}

void rearrangeArray(int arr[], int n) {
    for (int i = 1; i < n; i += 2) {
        if (arr[i] < arr[i - 1]) {
            swap(arr, i, i - 1);
        }
        if (i + 1 < n && arr[i] < arr[i + 1]) {
            swap(arr, i, i + 1);
        }
    }
}

int main() {
    int arr[] = { 9, 6, 8, 3, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    rearrangeArray(arr, n);
 
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}