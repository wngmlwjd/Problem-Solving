#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    for(int i = 2;i <= N;i++) {
        if(N % i == 0) {
            cout << i << '\n';
            N /= i;
            i--;
        }
    }

    return 0;
}