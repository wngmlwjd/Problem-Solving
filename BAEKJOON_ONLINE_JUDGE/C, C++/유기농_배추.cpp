#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> neighbor = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
vector<vector<bool>> input, visited;

void dfs(int a, int b) {
    visited[a][b] = true;

    for(int i = 0;i < 4;i++) {
        if(input[a + neighbor[i].first][b + neighbor[i].second] && !visited[a + neighbor[i].first][b + neighbor[i].second]) {
            dfs(a + neighbor[i].first, b + neighbor[i].second);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, K, a, b, cnt = 0;

    cin >> T;

    while(T--) {
        cin >> N >> M >> K;
        input.assign(N + 2, vector<bool>(M + 2, false));
        for(int i = 0;i < K;i++) {
            cin >> a >> b;

            input[a + 1][b + 1] = true;
        }

        visited.assign(N + 2, vector<bool>(M + 2, false));
        for(int i = 0;i < N;i++) {
            for(int j = 0;j < M;j++) {
                if(input[i + 1][j + 1] && !visited[i + 1][j + 1]) {
                    cnt++;
                    dfs(i + 1, j + 1);
                }
            }
        }

        cout << cnt << '\n';
        cnt = 0;
    }

    return 0;
}