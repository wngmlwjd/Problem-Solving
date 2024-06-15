#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    if(b >= 45) {
        b -= 45;
    }
    else {
        if(a == 0) {
            a = 23;
        }
        else {
            a--;
        }

        b += 15;
    }

    cout << a << ' ' << b << '\n';

    return 0;
}