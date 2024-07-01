#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    vector<pair<int, int>> sum;

    cin >> T;

    while(T--) {
        cin >> N;

        sum.clear();
        sum.push_back(make_pair(1, 0));
        sum.push_back(make_pair(0, 1));
        for(int i = 2;i <= N;i++) {
            sum.push_back(make_pair(sum[i - 2].first + sum[i - 1].first, sum[i - 2].second + sum[i - 1].second));
        }

        cout << sum[N].first << ' ' << sum[N].second << '\n';
    }

    return 0;
}