#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n) {
    if(n < 2) {
        return false;
    }
    else if(n <= 2) {
        return true;
    }

    for(long long int i = 2;i <= sqrt(n);i++) {
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

    long long int T, N;

    cin >> T;

    while(T--) {
        cin >> N;

        for(long long int i = N;;i++) {
            if(isPrime(i)) {
                cout << i << '\n';
                break;
            }
        }
    }

    return 0;
}