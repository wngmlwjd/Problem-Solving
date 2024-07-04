#include <bits/stdc++.h>
using namespace std;

int N, cnt = 1;
vector<int> output;
vector<vector<int>> input;

int cmp(int a, int b) {
    return a > b;
}

void dfs(int n) {
    output[n] = cnt++;

    for(int i = 0;i < input[n].size();i++) {
        if(output[input[n][i]] == 0) {
            dfs(input[n][i]);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, r, a, b;

    cin >> N >> T >> r;

    input.assign(N, vector<int>());
    for(int i = 0;i < T;i++) {
        cin >> a >> b;

        a--;
        b--;
        input[a].push_back(b);
        input[b].push_back(a);
    }
    for(int i = 0;i < N;i++) {
        sort(input[i].begin(), input[i].end(), cmp);
    }

    output.assign(N, 0);
    dfs(r - 1);

    for(int i = 0;i < N;i++) {
        cout << output[i] << '\n';
    }

    return 0;
}