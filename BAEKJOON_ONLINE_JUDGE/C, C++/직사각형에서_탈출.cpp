#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, a, b;

    cin >> b >> a >> M >> N;

    cout << min(min(a, N - a), min(b, M - b));

    return 0;
}