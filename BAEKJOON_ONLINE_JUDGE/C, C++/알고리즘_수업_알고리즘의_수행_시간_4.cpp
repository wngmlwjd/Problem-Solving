#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N;

    cin >> N;

    if((N - 1) % 2 == 0) {
        N = N * (N - 1) / 2;
    }
    else {
        N = N / 2 * (N - 1);
    }

    cout << N << '\n' << 2;

    return 0;
}