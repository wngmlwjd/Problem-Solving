#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<int> input;

    cin >> N;
    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }

    sort(input.begin(), input.end());

    for(int i = 0;i < N;i++) {
        cout << input[i] << '\n';
    }

    return 0;
}