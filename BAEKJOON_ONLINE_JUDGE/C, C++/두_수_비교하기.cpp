#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;

    cin >> a >> b;

    if(a == b) {
        cout << "==\n";
    }
    else if(a > b) {
        cout << ">\n";
    }
    else if(a < b) {
        cout << "<\n";
    }

    return 0;
}