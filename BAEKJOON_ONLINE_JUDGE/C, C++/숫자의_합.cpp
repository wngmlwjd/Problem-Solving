#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 0;
    string input;

    cin >> N >> input;

    for(int i = 0;i < N;i++) {
        sum += int(input[i] - '0');
    }

    cout << sum;

    return 0;
}