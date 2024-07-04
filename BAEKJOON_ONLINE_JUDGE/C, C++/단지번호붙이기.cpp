#include <bits/stdc++.h>
using namespace std;

vector<int> output;
vector<pair<int, int>> neighbor = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<vector<int>> input, visited;

void dfs(int a, int b, int n) {
    visited[a][b] = true;
    output[n]++;

    for(int i = 0;i < 4;i++) {
        if(input[a + neighbor[i].first][b + neighbor[i].second] == 1 && !visited[a + neighbor[i].first][b + neighbor[i].second]) {
            dfs(a + neighbor[i].first, b + neighbor[i].second, n);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string str;

    cin >> N;
    input.assign(N + 2, vector<int>(N + 2, 0));
    for(int i = 0;i < N;i++) {
        cin >> str;

        for(int j = 0;j < N;j++) {
            input[i + 1][j + 1] = int(str[j]) - '0';
        }
    }

    visited.assign(N + 2, vector<int>(N + 2, 0));
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            if(input[i + 1][j + 1] == 1 && !visited[i + 1][j + 1]) {
                output.push_back(0);
                dfs(i + 1, j + 1, output.size() - 1);
            }
        }
    }

    sort(output.begin(), output.end());

    cout << output.size() << '\n';
    for(int i = 0;i < output.size();i++) {
        cout << output[i] << '\n';
    }

    return 0;
}