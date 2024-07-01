#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N, n = 1, sum = 0, r = 31, M = 1234567891;
    string input;

    cin >> N >> input;

    for(int i = 0;i < N;i++) {
        sum += int(input[i] - 'a' + 1) * n % M;
        n *= r;
        n %= M;
    }

    cout << sum % M;

    return 0;
}