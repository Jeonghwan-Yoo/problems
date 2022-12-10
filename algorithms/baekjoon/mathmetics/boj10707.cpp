#include <iostream>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A, B, C, D, P;
    cin >> A >> B >> C >> D >> P;
    int X = P * A;
    int Y = B;
    if (P > C) {
        Y += (P - C) * D;
    }
    cout << min(X, Y);

    return 0;
}