#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b;

    cin >> a >> b;

    cout << ((a.length() >= b.length()) ? "go\n" : "no\n");

    return 0;
}