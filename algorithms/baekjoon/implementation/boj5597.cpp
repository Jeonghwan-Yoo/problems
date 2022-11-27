#include <iostream>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    bool finished[31] = { false, };
    for (int i = 0; i < 28; i++) {
        cin >> num;
        finished[num] = true;
    }
    for (int i = 1; i <= 30; i++) {
        if (!finished[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}