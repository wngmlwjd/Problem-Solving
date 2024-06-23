#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if(n == 0) {
        return 0;
    }
    else if(n == 1) {
        return 1;
    }

    return f(n - 2) + f(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    cout << f(N);

    return 0;
}