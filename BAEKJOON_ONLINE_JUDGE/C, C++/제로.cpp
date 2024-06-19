#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, sum = 0;
    vector<int> input;

    cin >> T;

    while(T--) {
        cin >> N;

        if(N == 0) {
            input.pop_back();
        }
        else {
            input.push_back(N);
        }
    }

    for(int i = 0;i < input.size();i++) {
        sum += input[i];
    }

    cout << sum;

    return 0;
}