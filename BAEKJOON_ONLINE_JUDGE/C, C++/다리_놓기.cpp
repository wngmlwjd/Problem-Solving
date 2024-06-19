#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, a, b;
    unsigned long long int sum;

    cin >> T;

    while(T--) {
        cin >> a >> b;

        sum = 1;
        for(int i = 0;i < a;i++) {
            sum *= (b - i);
            sum /= (i + 1);
        }
        
        cout << sum << '\n';
    }

    return 0;
}