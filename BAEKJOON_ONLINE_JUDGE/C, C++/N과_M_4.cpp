#include <bits/stdc++.h>
using namespace std;

int N, M;

void f(int n, vector<int> output) {
    if(output.size() == M) {
        for(int i = 0;i < M;i++) {
            cout << output[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = n;i <= N;i++) {
        output.push_back(i);
        f(i, output);
        output.pop_back();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> output;

    cin >> N >> M;

    f(1, output);

    return 0;
}