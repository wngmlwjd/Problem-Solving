#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> input;

void dfs(int n) {
    visited[n] = true;

    for(int i = 0;i < input[n].size();i++) {
        if(!visited[input[n][i]]) {
            dfs(input[n][i]);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, a, b;

    cin >> N >> M;
    input.assign(N, vector<int>());
    for(int i = 0;i < M;i++) {
        cin >> a >> b;

        a--;
        b--;
        input[a].push_back(b);
        input[b].push_back(a);
    }
    for(int i = 0;i < N;i++) {
        sort(input[i].begin(), input[i].end());
    }

    visited.assign(N, false);
    dfs(0);

    cout << accumulate(visited.begin() + 1, visited.end(), 0);

    return 0;
}