#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, n = 0, cnt = 0;

    cin >> N >> K;

    for(int i = 1;i <= N;i++) {
        if(N % i == 0) {
            cnt++;

            if(cnt == K) {
                n = i;
                break;
            }
        }
    }

    cout << n;

    return 0;
}