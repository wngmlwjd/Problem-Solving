#include <bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> input;

void dfs(int n) {
    visited[n] = true;
    cout << n + 1 << ' ';

    for(int i = 0;i < input[n].size();i++) {
        if(!visited[input[n][i]]) {
            dfs(input[n][i]);
        }
    }
}

void bfs(int s) {
    int n;
    deque<int> check;
    
    check.push_back(s);
    visited[s] = true;

    while(!check.empty()) {
        n = check.front();
        check.pop_front();
        cout << n + 1 << ' ';

        for(int i = 0;i < input[n].size();i++) {
            if(!visited[input[n][i]]) {
                check.push_back(input[n][i]);
                visited[input[n][i]] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, S, a, b;

    cin >> N >> M >> S;
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

    S--;
    visited.assign(N, false);
    dfs(S);
    cout << '\n';

    visited.assign(N, false);
    bfs(S);

    return 0;
}