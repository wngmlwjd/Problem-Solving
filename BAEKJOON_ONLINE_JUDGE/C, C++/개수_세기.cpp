#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n, count = 0;
    vector<int> input;

    cin >> N;
    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }
    cin >> n;

    for(int i = 0;i < N;i++) {
        if(input[i] == n) {
            count++;
        }
    }

    cout << count << '\n';

    return 0;
}