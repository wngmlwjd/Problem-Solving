#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    vector<int> output(10, 0);

    cin >> a >> b >> c;

    a *= b;
    a *= c;

    while(a > 0) {
        output[a % 10]++;
        a /= 10;
    }

    for(int i = 0;i < 10;i++) {
        cout << output[i] << '\n';
    }

    return 0;
}