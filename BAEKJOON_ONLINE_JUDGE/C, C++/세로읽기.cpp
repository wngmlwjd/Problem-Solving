#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int len, maxLen = 0;
    vector<string> input(5, "");

    for(int i = 0;i < 5;i++) {
        cin >> input[i];

        len = input[i].length();
        maxLen = max(maxLen, len);
    }

    for(int j = 0;j < maxLen;j++) {
        for(int i = 0;i < 5;i++) {
            if(j < input[i].length()) {
                cout << input[i][j];
            }
        }
    }

    return 0;
}