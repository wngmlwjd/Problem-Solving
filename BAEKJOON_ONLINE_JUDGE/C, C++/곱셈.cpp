#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, sum = 0;

    cin >> a >> b;

    for(int i = 0;i < 3;i++) {
        cout << a * (b % 10) << '\n';

        sum += a * (b % 10) * pow(10, i);
        b /= 10;
    }

    cout << sum << '\n';

    return 0;
}