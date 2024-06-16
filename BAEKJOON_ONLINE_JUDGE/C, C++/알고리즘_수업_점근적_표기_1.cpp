#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double a, b, c, n;

    cin >> a >> b >> c >> n;

    if(c - a < 0) {
        cout << 0;
    }
    else if(n * (c - a) >= b) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}