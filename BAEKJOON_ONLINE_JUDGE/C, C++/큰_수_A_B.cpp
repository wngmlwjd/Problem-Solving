#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0, sum = 0;
    string a, b, output = "";

    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    while(n < a.length() || n < b.length()) {
        if(n < a.length()) {
            sum += int(a[n] - '0');
        }
        if(n < b.length()) {
            sum += int(b[n] - '0');
        }

        output = to_string(sum % 10) + output;
        sum /= 10;

        n++;
    }
    while(sum > 0) {
        output = to_string(sum % 10) + output;
        sum /= 10;
    }

    cout << output;

    return 0;
}