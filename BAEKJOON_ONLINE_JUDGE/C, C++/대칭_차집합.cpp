#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, n, count = 0;
    set<int> input;

    cin >> N >> M;
    for(int i = 0;i < N;i++) {
        cin >> n;

        input.insert(n);
    }
    for(int i = 0;i < M;i++) {
        cin >> n;

        count += input.count(n);
    }

    cout << N + M - (count * 2);

    return 0;
}