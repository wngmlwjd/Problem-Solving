#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    cout << N / 100 * 78 << ' ' << N / 100 * 80 + (N / 100 * 20) / 100 * 78;

    return 0;
}