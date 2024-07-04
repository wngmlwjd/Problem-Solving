#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    string sub, input;

    while(1) {
        cin >> sub >> input;

        if(cin.eof()) {
            break;
        }

        a = b = 0;
        while(1) {
            if(a == sub.length()) {
                cout << "Yes\n";
                break;
            }
            else if(b == input.length()) {
                cout << "No\n";
                break;
            }

            if(sub[a] == input[b]) {
                a++;
            }
            b++;
        }
    }

    return 0;
}