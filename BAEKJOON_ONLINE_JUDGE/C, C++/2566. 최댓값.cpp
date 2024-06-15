#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m = -1, a, b;

    for(int i = 0;i < 9;i++) {
        for(int j = 0;j < 9;j++) {
            cin >> n;

            if(n > m) {
                m = n;
                a = i + 1;
                b = j + 1;
            }
        }
    }

    cout << m << '\n' << a << ' ' << b;

    return 0;
}