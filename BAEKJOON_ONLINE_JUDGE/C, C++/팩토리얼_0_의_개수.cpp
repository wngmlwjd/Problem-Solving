#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, cnt = 0, a = 0, b = 0;

    cin >> N;

    for(int i = 1;i <= N;i++) {
        M = i;
        while(M % 10 == 0) {
            cnt++;
            M /= 10;
        }

        while(M % 5 == 0) {
            a++;
            M /= 5;
        }
        while(M % 2 == 0) {
            b++;
            M /= 2;
        }
    }

    cout << cnt + min(a, b);

    return 0;
}