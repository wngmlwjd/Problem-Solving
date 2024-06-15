#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum;

    cin >> N;

    if(N % 2 == 0) {
        sum = (1 + N) * N / 2;
    }
    else {
        sum = (1 + N) / 2 * N;
    }

    cout << sum << '\n';

    return 0;
}