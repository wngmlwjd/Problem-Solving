#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if(n < 2) {
        return false;
    }
    else if(n < 4) {
        return true;
    }

    for(int i = 2;i <= sqrt(n);i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    cin >> N >> M;

    for(int i = N;i <= M;i++) {
        if(isPrime(i)) {
            cout << i << '\n';
        }
    }

    return 0;
}