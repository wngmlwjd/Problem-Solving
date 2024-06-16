#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N, sum = 0;
    
    cin >> N;

    for(int i = 1;i <= N - 2;i++) {
        sum += i * (N - 1 - i);
    }

    cout << sum << '\n' << 3;

    return 0;
}