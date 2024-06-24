#include <bits/stdc++.h>
using namespace std;

int cnt1 = 0;
vector<int> fibonacci;

int fib(int n) {
    if(n == 1 or n == 2) {
        cnt1++;
        return 1;
    }
    return fib(n - 2) + fib(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    fib(N);

    cout << cnt1 << ' ' << N - 2;

    return 0;
}