#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        int sSize = s.size();
        for (int j = 0; j < sSize; j++) {
            s[j] = (s[j] - 'A' + 1) % 26 + 'A';
        }
        cout << "String #" << i + 1 << "\n";
        cout << s << "\n\n";
    }

    return 0;
}