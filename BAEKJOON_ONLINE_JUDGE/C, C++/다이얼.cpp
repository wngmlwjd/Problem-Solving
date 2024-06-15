#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;
    string input;
    vector<int> dial = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};

    cin >> input;

    for(int i = 0;i < input.length();i++) {
        sum += dial[int(input[i] - 'A')] + 1;
    }

    cout << sum;

    return 0;
}