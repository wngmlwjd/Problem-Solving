#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, T, a, b;

    cin >> N >> T;

    while(T--) {
        cin >> a >> b;

        N -= a * b;
    }

    if(N == 0) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

    return 0;
}