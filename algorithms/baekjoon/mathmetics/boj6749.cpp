#include <iostream>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Y, M;
    cin >> Y >> M;
    cout << M + (M - Y);

    return 0;
}