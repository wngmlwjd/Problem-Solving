#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    while(1) {
        cin >> a >> b;

        if(a == 0 and b == 0) {
            break;
        }

        cout << ((a > b) ? "Yes\n" : "No\n");
    }

    return 0;
}