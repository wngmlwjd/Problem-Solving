#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int sum = 0;
    vector<int> input(5, 0);

    for(int i = 0;i < 5;i++) {
        cin >> input[i];
    }

    sort(input.begin(), input.end());
    sum = accumulate(input.begin(), input.end(), 0);

    cout << sum / 5 << '\n' << input[2];

    return 0;
}