#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, n = 0;

    cin >> a >> b >> c;

    if(a == b && b == c) {
        n = 10000 + a * 1000;
    }
    else if(a == b || b == c) {
        n = 1000 + b * 100;
    }
    else if(a == c) {
        n = 1000 + a * 100;
    }
    else {
        n = max(max(a, b), c) * 100;
    }

    cout << n << '\n';

    return 0;
}