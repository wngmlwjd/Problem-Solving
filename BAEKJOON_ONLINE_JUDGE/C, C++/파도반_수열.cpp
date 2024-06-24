#include <bits/stdc++.h>
using namespace std;

int max_input = 0;
vector<long long> output = {1, 1, 1};

void f() {
    for(int i = 3;i < max_input;i++) {
        output.push_back(output[i - 3] + output[i - 2]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n;
    vector<int> input;

    cin >> N;

    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];

        max_input = max(max_input, input[i]);
    }

    f();

    for(int i = 0;i < N;i++) {
        cout << output[input[i] - 1] << '\n';
    }

    return 0;
}