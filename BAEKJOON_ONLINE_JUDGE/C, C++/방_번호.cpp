#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int output = 0, n;
    string input;
    vector<int> count(10, 0);

    cin >> input;

    for(int i = 0;i < 10;i++) {
        count[int(input[i] - '0')]++;
    }

    for(int i = 0;i < 10;i++) {
        if(i != 6 and i != 9) {
            output = max(output, count[i]);
        }
    }

    n = (max(count[6], count[9]) - min(count[6], count[9])) / 2 + min(count[6], count[9]);
    n += ((max(count[6], count[9]) - min(count[6], count[9])) % 2 > 0);
    output = max(output, n);

    cout << output;

    return 0;
}