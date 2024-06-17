#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n = -1;

    cin >> N;

    for(int i = N / 5;i >= 0;i--) {
        if((N - (5 * i)) % 3 == 0) {
            n = i + (N - (5 * i)) / 3;
            break;
        }
    }

    cout << n;

    return 0;
}