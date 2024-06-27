#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<int>> point = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
vector<vector<bool>> checked;
vector<string> input;

void bfs(int a, int b, char n) {
    checked[a][b] = true;
    
    for(int i = 0;i < 4;i++) {
        if(input[a + point[i][0]][b + point[i][1]] == n && !checked[a + point[i][0]][b + point[i][1]]) {
            bfs(a + point[i][0], b + point[i][1], n);
        }
    }
}

void bfs1(int a, int b) {
    checked[a][b] = true;
    
    for(int i = 0;i < 4;i++) {
        if((input[a + point[i][0]][b + point[i][1]] == 'R' || input[a + point[i][0]][b + point[i][1]] == 'G') && !checked[a + point[i][0]][b + point[i][1]]) {
            bfs1(a + point[i][0], b + point[i][1]);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;
    string str = "";

    cin >> N;
    for(int i = 0;i < N;i++) {
        str += " ";
    }
    input.push_back(str);
    for(int i = 1;i <= N;i++) {
        input.push_back(" ");
        cin >> str;
        input[i] += str + " ";
    }
    input.push_back(input[0]);

    checked.assign(N + 2, vector<bool>(N + 2, false));
    for(int i = 1;i <= N;i++) {
        for(int j = 1;j <= N;j++) {
            if(!checked[i][j]) {
                bfs(i, j, input[i][j]);
                cnt++;
            }
        }
    }

    cout << cnt << ' ';
    
    cnt = 0;
    checked.assign(N + 2, vector<bool>(N + 2, false));
    for(int i = 1;i <= N;i++) {
        for(int j = 1;j <= N;j++) {
            if(!checked[i][j]) {
                if(input[i][j] == 'B') {
                    bfs(i, j, input[i][j]);
                }
                else {
                    bfs1(i, j);
                }
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}