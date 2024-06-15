#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, cnt = 0;
    vector<bool> prime(1001, true);

    prime[0] = prime[1] = false;
    for(int i = 2;i < 1001;i++) {
        if(prime[i]) {
            for(int j = 2;i * j < 1001;j++) {
                prime[i * j] = false;
            }
        }
    }

    cin >> T;

    while(T--) {
        cin >> N;

        cnt += prime[N];
    }

    cout << cnt;

    return 0;
}