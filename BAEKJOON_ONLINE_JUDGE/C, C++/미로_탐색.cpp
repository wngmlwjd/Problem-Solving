#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, a, b;
    string str;
    vector<int> row = {-1, 1, 0, 0}, col = {0, 0, -1, 1};
    vector<vector<int>> distance;
    vector<vector<bool>> input, visited;
    deque<pair<int, int>> bfs;

    cin >> N >> M;
    input.assign(N + 2, vector<bool>(M + 2, false));
    for(int i = 0;i < N;i++) {
        cin >> str;

        for(int j = 0;j < M;j++) {
            input[i + 1][j + 1] = ((str[j] == '1') ? true : false);
        }
    }

    visited.assign(N + 2, vector<bool>(M + 2, false));
    distance.assign(N + 2, vector<int>(M + 2, 0));
    bfs.push_back(make_pair(1, 1));
    visited[1][1] = true;
    distance[1][1] = 1;
    while(!bfs.empty()) {
        a = bfs.front().first;
        b = bfs.front().second;
        bfs.pop_front();

        for(int i = 0;i < 4;i++) {
            if(input[a + row[i]][b + col[i]] && !visited[a + row[i]][b + col[i]]) {
                bfs.push_back(make_pair(a + row[i], b + col[i]));
                visited[a + row[i]][b + col[i]] = true;
                distance[a + row[i]][b + col[i]] = distance[a][b] + 1;
            }
        }
    }

    cout << distance[N][M];

    return 0;
}