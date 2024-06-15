#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    double n, m = 0, sum = 0;

    cin >> N;

    for(int i = 0;i < N;i++) {
        cin >> n;

        sum += n;
        m = max(m, n);
    }

    cout << fixed;
    cout.precision(10);
    cout << (sum / m * 100.0) / N;

    return 0;
}