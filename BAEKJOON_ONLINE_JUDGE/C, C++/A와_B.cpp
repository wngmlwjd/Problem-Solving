#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;

    cin >> a >> b;

    while(a.length() != b.length()) {
        if(b.back() == 'B') {
            b = b.substr(0, b.length() - 1);
            reverse(b.begin(), b.end());
        }
        else {
            b = b.substr(0, b.length() - 1);
        }
    }

    cout << (a == b);

    return 0;
}