#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    if(n == 0) {
        return 1;
    }

    return n * f(n - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    cout << f(a) / (f(a - b) * f(b));

    return 0;
}