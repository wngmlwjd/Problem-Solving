#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, T, a, b, c;
    vector<int> output;

    cin >> N >> T;
    output.assign(N, 0);

    while(T--) {
        cin >> a >> b >> c;

        for(int i = a - 1;i < b;i++) {
            output[i] = c;
        }
    }

    for(int i = 0;i < N;i++) {
        cout << output[i] << ' ';
    }

    return 0;
}