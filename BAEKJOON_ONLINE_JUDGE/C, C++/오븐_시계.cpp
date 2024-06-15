#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    b += c;
    a = (a + b / 60) % 24;
    b %= 60;

    cout << a << ' ' << b << '\n';

    return 0;
}