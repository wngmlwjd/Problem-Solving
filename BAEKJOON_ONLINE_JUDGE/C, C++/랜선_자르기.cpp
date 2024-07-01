#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N, M, sum, a, b;
    vector<int> input;

    cin >> N >> M;
    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }

    a = 1;
    b = *max_element(input.begin(), input.end());
    while(a <= b) {
        sum = 0;
        for(int i = 0;i < N;i++) {
            sum += input[i] / ((a + b) / 2);
        }

        if(sum >= M) {
            a = (a + b) / 2 + 1;
        }
        else {
            b = (a + b) / 2 - 1;
        }
    }

    cout << b;

    return 0;
}