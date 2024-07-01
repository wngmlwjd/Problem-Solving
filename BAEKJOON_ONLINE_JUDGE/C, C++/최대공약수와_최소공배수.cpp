#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c = 1, d = 1;

    cin >> a >> b;

    for(int i = min(a, b);i > 0;i--) {
        if(a % i == 0 && b % i == 0) {
            cout << i << '\n';
            break;
        }
    }

    while(a * c != b * d) {
        if(a * c > b * d) {
            d++;
        }
        else {
            c++;
        }
    }

    cout << a * c;

    return 0;
}