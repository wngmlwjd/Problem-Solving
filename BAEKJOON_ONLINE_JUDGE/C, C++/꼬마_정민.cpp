#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    bool check = false;
    string input;
    vector<int> sum(12, 0);

    for(int i = 0;i < 3;i++) {
        cin >> input;

        for(int j = 0;j < input.length();j++) {
            sum[j] += int(input[input.length() - 1 - j]) - '0';
        }
    }

    for(int i = 0;i < 11;i++) {
        sum[i + 1] += sum[i] / 10;
        sum[i] %= 10;
    }

    for(int i = 11;i >= 0;i--) {
        if(!check && sum[i] > 0) {
            check = true;
        }

        if(check) {
            cout << sum[i];
        }
    }

    return 0;
}