#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, a, b;

    cin >> T;

    for(int t = 0;t < T;t++) {
        cin >> a >> b;
        
        cout << "Case #" << t + 1 << ": " << a + b << '\n';
    }

    return 0;
}