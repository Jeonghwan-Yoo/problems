#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    string s;
    for (int i = 0; i < N; i++) {
        cin >> s;
        cout << s[0] << s[s.length() - 1] << '\n';
    }

    return 0;
}