#include <iostream>
#include <string>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S, K;
    cin >> S >> K;

    int sLen = S.length();
    string sWithoutNumber = "";
    for (int i = 0; i < sLen; i++) {
        if ('0' <= S[i] && S[i] <= '9') {
            continue;
        }
        sWithoutNumber += S[i];
    }
    int index = sWithoutNumber.find(K);
    if (index == -1) {
        cout << "0";
    } else {
        cout << "1";
    }

    return 0;
}