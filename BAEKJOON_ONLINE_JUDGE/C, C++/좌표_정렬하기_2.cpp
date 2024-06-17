#include <bits/stdc++.h>
using namespace std;

int cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<pair<int, int>> input;

    cin >> N;
    input.assign(N, pair<int, int>(0, 0));
    for(int i = 0;i < N;i++) {
        cin >> input[i].first >> input[i].second;
    }

    sort(input.begin(), input.end(), cmp);

    for(int i = 0;i < N;i++) {
        cout << input[i].first << ' ' << input[i].second << '\n';
    }

    return 0;
}