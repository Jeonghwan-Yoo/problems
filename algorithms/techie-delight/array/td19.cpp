#include <iostream>

using namespace std;

void findBitonicSubarray(int A[], int n) {
    if (n <= 0) {
        return;
    }

    int inc[n];
    for (int i = 0; i < n; i++) {
        inc[i] = 1;
    }
    for (int i = 1; i < n; i++) {
        if (A[i] > A[i - 1]) {
            inc[i] = inc[i - 1] + 1;
        }
    }
    int dec[n];
    for (int i = 0; i < n; i++) {
        dec[i] = 1;
    }
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] > A[i + 1]) {
            dec[i] = dec[i + 1] + 1;
        }
    }

    int longest = 1;
    int start = 0;
    int end = 0;
    for (int i = 0; i < n; i++) {
        int length = inc[i] + dec[i] - 1;
        if (longest < length) {
            longest = length;
            start = i - inc[i] + 1;
            end = i + dec[i] - 1;
        }
    }

    printf("The length of the longest bitonic subarray is %d\n", longest);
    printf("The longest bitonic subarray indices is [%d, %d]", start, end);

}

void findBitonicSubarray2(int A[], int n) {
    int maxLen = 1;
    int index = 0;
    int end = 0;
    while (index + 1 < n) { 
        int len = 1;
        while (index + 1 < n && A[index] < A[index + 1]) {
            index++;
            len++;
        }
        while (index + 1 < n && A[index] > A[index + 1]) {
            index++;
            len++;
        }
        while (index + 1 < n && A[index] == A[index + 1]) {
            index++;
        }
        if (maxLen < len) {
            maxLen = len;
            end = index;
        }
    }

    printf("The length of the longest bitonic subarray is %d\n", maxLen);
    printf("The longest bitonic subarray indices is [%d, %d]", end - maxLen + 1, end);
}

int main() {
    int A[] = { 3, 5, 8, 4, 5, 9, 10, 8, 5, 3, 4 };
    int n = sizeof(A) / sizeof(A[0]);
 
    findBitonicSubarray2(A, n);

    return 0;
}