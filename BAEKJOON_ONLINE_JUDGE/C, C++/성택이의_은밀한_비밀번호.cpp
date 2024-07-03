#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    string input;

    cin >> T;

    while(T--) {
        cin >> input;

        cout << ((input.length() >= 6 and input.length() <= 9) ? "yes\n" : "no\n");
    }

    return 0;
}