#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    while (true) {
        getline(cin, line);
        if (line == "END") {
            break;
        }
        int lineOfSize = line.length();
        for (int i = lineOfSize - 1; i >= 0; i--) {
            cout << line[i];
        }
        cout << '\n';
    }

    return 0;
}