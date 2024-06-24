#include <bits/stdc++.h>
using namespace std;

vector<bool> prime(1000001, true);

void PrimeNumber() {
    prime[0] = prime[1] = false;
    for(int i = 2;i < 1000001;i++) {
        if(prime[i]) {
            for(int j = 2;i * j < 1000001;j++) {
                prime[i * j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    PrimeNumber();

    while(1) {
        cin >> N;

        if(!N) {
            break;
        }

        for(int i = 2;i <= N / 2;i++) {
            if(prime[i] and prime[N - i]) {
                cout << N << " = " << i << " + " << N - i << '\n';
                break;
            }
        }
    }

    return 0;
}