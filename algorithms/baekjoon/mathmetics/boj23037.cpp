#include <iostream>

using namespace std;

int getFiveSquares(int n) {
    int ret = 1;
    for (int i = 0; i < 5; i++) {
        ret *= n;
    }
    return ret;
}

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += getFiveSquares(n % 10);
        n /= 10;
    }
    cout << sum;

    return 0;
}