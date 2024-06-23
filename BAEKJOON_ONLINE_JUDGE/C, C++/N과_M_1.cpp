#include <bits/stdc++.h>
using namespace std;

int N, M;

void f(vector<bool> check, vector<int> output) {
    if(output.size() == M)  {
        for(int i = 0;i < M;i++) {
            cout << output[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i = 0;i < N;i++) {
        if(!check[i]) {
            check[i] = true;
            output.push_back(i + 1);

            f(check, output);

            check[i] = false;
            output.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> output;
    vector<bool> check;

    cin >> N >> M;

    check.assign(N, false);
    f(check, output);

    return 0;
}