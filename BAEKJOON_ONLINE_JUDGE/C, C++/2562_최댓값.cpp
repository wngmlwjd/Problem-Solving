#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n, max = 0;

    for(int i = 0;i < 9;i++) {
        cin >> N;

        if(max < N) {
            max = N;
            n = i + 1;
        }
    }

    cout << max << '\n' << n << '\n';

    return 0;
}