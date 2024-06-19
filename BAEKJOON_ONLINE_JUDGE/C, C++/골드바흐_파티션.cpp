#include <bits/stdc++.h>
using namespace std;

#define SIZE 1000000

vector<bool> prime(SIZE, true);

void isPrime() {
    prime[0] = prime[1] = false;

    for(int i = 2;i < SIZE;i++) {
        if(prime[i]) {
            for(int j = 2;i * j < SIZE;j++) {
                prime[i * j] = false;
            }
        }
    }
}

bool goldbach(int a, int b) {
    return prime[a] && prime[b];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, count;

    isPrime();

    cin >> T;

    while(T--) {
        cin >> N;

        count = 0;
        for(int i = 2;i <= N / 2;i++) {
            count += goldbach(i, N - i);
        }

        cout << count << '\n';
    }

    return 0;
}