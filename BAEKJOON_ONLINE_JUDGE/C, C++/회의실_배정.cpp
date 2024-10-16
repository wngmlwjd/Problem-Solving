#include <bits/stdc++.h>
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b) {
    return ((a.second == b.second) ? a.first < b.first : a.second < b.second);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n, count = 1;
    vector<pair<int, int>> input;

    cin >> N;
    input.assign(N, pair<int, int>(0, 0));
    for(int i = 0;i < N;i++) {
        cin >> input[i].first >> input[i].second;
    }

    sort(input.begin(), input.end(), cmp);

    n = input.front().second;
    for(int i = 1;i < N;i++) {
        if(input[i].first >= n) {
            count++;
            n = input[i].second;
        }
    }

    cout << count;

    return 0;
}