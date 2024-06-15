#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n = 2;

    cin >> N;

    for(int i = 0;i < N;i++) {
        n = n * 2 - 1;
    }

    cout << n * n;

    return 0;
}