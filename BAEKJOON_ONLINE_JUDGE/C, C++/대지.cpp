#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, x, y, a, b, c, d;

    cin >> T;

    a = b = 10001;
    c = d = -10001;
    while(T--) {
        cin >> x >> y;

        a = min(a, x);
        b = min(b, y);
        c = max(c, x);
        d = max(d, y);
    }
    
    cout << (c - a) * (d - b);

    return 0;
}