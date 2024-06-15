#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, T, a, b;
    vector<int> output;

    cin >> N >> T;
    
    for(int i = 0;i < N;i++) {
        output.push_back(i + 1);
    }

    while(T--) {
        cin >> a >> b;

        reverse(output.begin() + (a - 1), output.begin() + b);
    }
    
    for(int i = 0;i < N;i++) {
        cout << output[i] << ' ';
    }

    return 0;
}