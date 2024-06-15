#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string input;
    vector<int> output(26, -1);

    cin >> input;

    for(int i = 0;i < input.length();i++) {
        if(output[int(input[i] - 'a')] == -1) {
            output[int(input[i] - 'a')] = i;
        }
    }

    for(int i = 0;i < 26;i++) {
        cout << output[i] << ' ';
    }

    return 0;
}