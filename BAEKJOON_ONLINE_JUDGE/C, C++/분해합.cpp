#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, sum, n = 0;
    string input;

    cin >> N;

    input = to_string(N);
    for(int i = N - 9 * input.length();i <= N;i++) {
        M = i;
        sum = M;
        while(M > 0) {
            sum += M % 10;
            M /= 10;
        }

        if(sum == N) {
            n = i;
            break;
        }
    }

    cout << n;

    return 0;
}