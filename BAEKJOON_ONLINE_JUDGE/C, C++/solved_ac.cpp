#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n, sum;
    vector<int> input;

    cin >> N;

    if(N == 0) {
        cout << 0;
        return 0;
    }

    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }
    sort(input.begin(), input.end());

    n = floor(N * 15 / 100.0 + 0.5);
    sum = accumulate(input.begin() + n, input.end() - n, 0);
    
    cout << floor(double(sum) / (N - n * 2) + 0.5);

    return 0;
}