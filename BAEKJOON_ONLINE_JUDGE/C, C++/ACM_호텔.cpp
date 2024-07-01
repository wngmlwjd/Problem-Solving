#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, a, b, c;

    cin >> T;

    while(T--) {
        cin >> a >> b >> c;

        if(c % a == 0) {
            cout << a;
            if(c / a < 10) {
                cout << 0;
            }
            cout << c / a << '\n';
        }
        else {
            cout << c % a;
            if(c / a < 9) {
                cout << 0;
            }
            cout << c / a + 1 << '\n';
        }
    }

    return 0;
}