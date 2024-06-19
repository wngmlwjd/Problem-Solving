#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if(a % b == 0) {
        return b;
    }

    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d, n, m;

    cin >> a >> b >> c >> d;

    m = b * d / gcd(b, d);
    n = (a * (m / b)) + (c * (m / d));

    for(int i = 2;i <= min(n, m);i++) {
        if(n % i == 0 && m % i == 0) {
            n /= i;
            m /= i;
            i--;
        }
    }

    cout << n << ' ' << m;

    return 0;
}