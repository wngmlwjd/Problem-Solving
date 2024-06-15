#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;

    while(1) {
        getline(cin, input);

        if(cin.eof()) {
            break;
        }

        cout << input << '\n';
    }

    return 0;
}