#include <iostream>
#include <vector>

using namespace std;

int main() {
    freopen("../input.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    int N2 = N << 1;
    vector<vector<int> > matrix(N, vector<int>(M));
    for (int i = 0; i < N2; i++) {
        for (int j = 0; j < M; j++) {
            int num;
            cin >> num;
            matrix[i % N][j] += num;
        }
    }
    for (vector<int> row: matrix) {
        for (int col: row) {
            cout << col << ' ';
        }
        cout << '\n';
    }

    return 0;
}