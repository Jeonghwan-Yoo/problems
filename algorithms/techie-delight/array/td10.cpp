#include <iostream>

using namespace std;

void merge(int X[], int Y[], int a, int b) {
    int ab = a + b + 1;

    while (ab > 0) {
        if (X[a] > Y[b]) {
            X[ab] = X[a];
            a--;
        } else {
            X[ab] = Y[b];
            Y[b] = 0;
            b--;
        }
        ab--;
    }

    while (b >= 0) {
        X[ab] = Y[b];
        Y[b] = 0;
        ab--;
        b--;
    }
}

void rearrange(int X[], int Y[], int m, int n) {
    if (m == 0) {
        return;
    }

    int index = 0;
    for (int i = 0; i < m; i++) {
        if (X[i] != 0) {
            X[index] = X[i];
            index++;
        }
    }

    merge(X, Y, index - 1, n - 1);
}

int main()
{
    int X[] = { 0, 2, 0, 3, 0, 5, 6, 0, 0 };
    int Y[] = { 1, 8, 9, 10, 15 };
 
    int m = sizeof(X) / sizeof(X[0]);
    int n = sizeof(Y) / sizeof(Y[0]);
 
    rearrange(X, Y, m, n);
 
    for (int i = 0; i < m; i++) {
        printf("%d ", X[i]);
    }
 
    return 0;
}