#include <iostream>

using namespace std;

void sort(int A[], int n) {
    int zeroCnt = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == 0) {
            zeroCnt++;
        }
    }
    int idx = 0;
    while (idx < zeroCnt) {
        A[idx] = 0;
        idx++;
    }
    while (idx < n) {
        A[idx] = 1;
        idx++;
    }
}

void sort2(int A[], int n) {
    int idx = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == 0) {
            A[idx] = 0;
            idx++;
        }
    }
    while (idx < n) {
        A[idx] = 1;
        idx++;
    }
}

// Using patitioning
void swap(int A[], int i, int j) {
    int tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;
}

void partition(int A[], int n) {
    int pivot = 1;
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] < pivot) {
            swap(A, i, j);
            j++;
        }
    }
}
int main() {
    int A[] = { 0, 0, 1, 0, 1, 1, 0, 1, 0, 0 };
    int n = sizeof(A) / sizeof(A[0]);
 
    sort(A, n);
    sort2(A, n);
    partition(A, n);
 
    for (int i = 0; i < n; i++) {
        cout << A[i] << ' ';
    }

    return 0;
}