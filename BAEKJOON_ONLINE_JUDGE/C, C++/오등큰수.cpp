#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<int> input, output;
    stack<int> check;

    cin >> N;
    input.assign(N, 0);
    output.assign(N, -1);
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }

    check.push(0);
    for(int i = 1;i < N;i++) {
        while(!check.empty() && (input[check.top()] < input[i])) {
            output[check.top()] = input[i];
            check.pop();
        }
        check.push(i);
    }

    for(int i = 0;i < N;i++) {
        cout << output[i] << ' ';
    }

    return 0;
}