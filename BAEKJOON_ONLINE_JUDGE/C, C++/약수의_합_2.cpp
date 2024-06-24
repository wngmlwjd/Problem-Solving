#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    long long sum = 0;

    cin >> N;

    for(int i = 1;i <= N;i++) {
        sum += i * (N / i);
    }

    cout << sum;

    return 0;
}