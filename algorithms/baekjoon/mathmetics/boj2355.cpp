#include <iostream>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long A, B;
    cin >> A >> B;
    if (A > B) {
        cout << (A + B) * (A - B + 1) / 2;
    } else {
        cout << (A + B) * (B - A + 1) / 2;
    }

    return 0;
}