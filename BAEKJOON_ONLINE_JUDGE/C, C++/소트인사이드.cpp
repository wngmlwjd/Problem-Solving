#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;

    cin >> input;

    sort(input.begin(), input.end());

    for(int i = input.length() - 1;i >= 0;i--) {
        cout << input[i];
    }

    return 0;
}