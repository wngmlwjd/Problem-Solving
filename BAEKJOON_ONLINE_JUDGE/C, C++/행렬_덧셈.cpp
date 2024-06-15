#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, n;
    vector<vector<int>> input;

    cin >> N >> M;
    input.assign(N, vector<int>(M, 0));
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < M;j++) {
            cin >> input[i][j];
        }
    }
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < M;j++) {
            cin >> n;

            cout << input[i][j] + n << ' ';
        }
        cout << '\n';
    }

    return 0;
}