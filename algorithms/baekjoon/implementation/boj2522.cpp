#include <iostream>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            cout << ' ';
        }
        for (int j = N - i - 1; j < N; j++) {
            cout << '*';
        }
        cout << '\n';
    }
    
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << ' ';
        }
        for (int j = i + 1; j < N; j++) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}