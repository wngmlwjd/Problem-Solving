#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, count = 0;
    vector<int> input;

    cin >> N >> K;
    input.assign(N, 0);
    for(int i = N - 1;i >= 0;i--) {
        cin >> input[i];
    }

    for(int i = 0;i < N;i++) {
        count += K / input[i];
        K %= input[i];
    }

    cout << count;

    return 0;
}