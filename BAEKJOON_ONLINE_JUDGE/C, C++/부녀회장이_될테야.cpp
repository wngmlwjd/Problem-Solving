#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, a = 0, b = 0;
    vector<pair<int, int>> input;
    vector<vector<int>> sum;

    cin >> N;
    input.assign(N, pair<int, int>(0, 0));
    for(int i = 0;i < N;i++) {
        cin >> input[i].first >> input[i].second;

        a = max(a, input[i].first);
        b = max(b, input[i].second);
    }

    sum.assign(a + 1, vector<int>(b, 0));
    for(int i = 0;i < b;i++) {
        sum[0][i] = i + 1;
    }
    for(int i = 1;i <= a;i++) {
        for(int j = 0;j < b;j++) {
            sum[i][j] = accumulate(sum[i - 1].begin(), sum[i - 1].begin() + j + 1, 0);
        }
    }

    for(int i = 0;i < N;i++) {
        cout << sum[input[i].first][input[i].second - 1] << '\n';
    }

    return 0;
}