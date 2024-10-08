#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K, sum = 0, maxSum = 0;
    vector<int> input;

    cin >> N >> K;
    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];

        if(i < K) {
            sum += input[i];
        }
    }

    maxSum = sum;
    for(int i = 0, j = K;j < N;i++, j++) {
        sum += input[j] - input[i];

        maxSum = max(maxSum, sum);
    }

    cout << maxSum;

    return 0;
}