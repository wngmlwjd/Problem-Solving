#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, a, b, sum = 0;
    vector<vector<int>> input(100, vector<int>(100, 0));

    cin >> T;

    while(T--) {
        cin >> a >> b;

        a--;
        b--;
        for(int i = 0;i < 10;i++) {
            for(int j = 0;j < 10;j++) {
                input[a + i][b + j] = 1;
            }
        }
    }

    for(int i = 0;i < 100;i++) {
        for(int j = 0;j < 100;j++) {
            sum += input[i][j];
        }
    }

    cout << sum;

    return 0;
}