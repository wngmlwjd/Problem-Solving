#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, a, b, n;

    cin >> a >> b >> N;

    n = (N - a) / (a - b) + 1;

    if((N - a) % (a - b) > 0) {
        n++;
    }

    cout << n;

    return 0;
}