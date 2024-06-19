#include <bits/stdc++.h>
using namespace std;

#define SIZE 246913

vector<int> sum(SIZE, 0);
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

void countPrime() {
    for(int i = 1;i < SIZE;i++) {
        sum[i] = sum[i - 1] + prime[i];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    isPrime();
    countPrime();

    while(1) {
        cin >> N;

        if(N == 0) {
            break;
        }

        cout << sum[N * 2] - sum[N] << '\n';
    }

    return 0;
}