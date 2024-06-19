#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
    if(a % b == 0) {
        return b;
    }

    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N, M;

    cin >> N >> M;

    if(N < M) {
        swap(N, M);
    }

    cout << N * M / gcd(N, M);

    return 0;
}