#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    vector<pair<int, int>> input;
    vector<vector<int>> dp;

    cin >> N >> K;
    input.assign(N, pair<int, int>(0, 0));
    for(int i = 0;i < N;i++) {
        cin >> input[i].first >> input[i].second;
    }
    sort(input.begin(), input.end());
    reverse(input.begin(), input.end());

    dp.assign(N + 1, vector<int>(K + 1, 0));
    for(int i = 1;i <= K;i++) {
        for(int j = 1;j <= N;j++) {
            if(input[j - 1].first > i) {
                dp[j][i] = dp[j - 1][i];
            }
            else {
                dp[j][i] = max(dp[j - 1][i], dp[j - 1][i - input[j - 1].first] + input[j - 1].second);
            }
        }
    }

    cout << dp[N][K];

    return 0;
}