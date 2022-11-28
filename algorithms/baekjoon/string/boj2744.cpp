#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;
    for (char &c: word) {
        if ('a' <= c && c <= 'z') {
            c = c - 'a' + 'A';
        } else {
            c = c - 'A' + 'a';
        }
    }
    cout << word;

    return 0;
}