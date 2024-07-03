#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    if(a >= 12 and a <= 16 and !b) {
        cout << 320;
    }
    else {
        cout << 280;
    }

    return 0;
}