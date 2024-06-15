#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    if(a > 0 && b > 0) {
        cout << 1 << '\n';
    }
    else if(a < 0 && b > 0) {
        cout << 2 << '\n';
    }
    else if(a < 0 && b < 0) {
        cout << 3 << '\n';
    }
    else {
        cout << 4 << '\n';
    }

    return 0;
}