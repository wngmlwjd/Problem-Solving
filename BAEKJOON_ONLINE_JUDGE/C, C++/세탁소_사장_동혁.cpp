#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;

    cin >> T;

    while(T--) {
        cin >> N;

        cout << N / 25 << ' ';
        N %= 25;
        cout << N / 10 << ' ';
        N %= 10;
        cout << N / 5 << ' ';
        N %= 5;
        cout << N << '\n';
    }

    return 0;
}