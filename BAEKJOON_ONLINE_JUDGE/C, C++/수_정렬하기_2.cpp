#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n, a = 10000, b = 0;
    vector<int> input(10000, 0);

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> n;

        input[n - 1]++;

        a = min(a, n);
        b = max(b, n);
    }

    for(int i = a;i <= b;i++) {
        for(int j = 0;j < input[i - 1];j++) {
            cout << i << '\n';
        }
    }

    return 0;
}