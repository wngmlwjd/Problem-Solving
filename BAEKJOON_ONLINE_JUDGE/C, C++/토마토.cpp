#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<vector<int>> input, point = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
deque<pair<int, int>> grown;

bool check() {
    for(int i = 1;i <= N;i++) {
        for(int j = 1;j <= M;j++) {
            if(input[i][j] == 0) {
                if(input[i - 1][j] + input[i + 1][j] + input[i][j - 1] + input[i][j + 1] == -4) {
                    return false;
                }
            }
        }
    }
    return true;
}

bool count() {
    for(int i = 1;i <= N;i++) {
        for(int j = 1;j <= M;j++) {
            if(input[i][j] == 0) {
                return false;
            }
        }
    }
    return true;
}

void tomato() {
    int size = grown.size();

    for(int i = 0;i < size;i++) {
        for(int j = 0;j < 4;j++) {
            if(input[grown.front().first + point[j][0]][grown.front().second + point[j][1]] == 0) {
                input[grown.front().first + point[j][0]][grown.front().second + point[j][1]] = 1;
                grown.push_back(make_pair(grown.front().first + point[j][0], grown.front().second + point[j][1]));
            }
        }
        grown.pop_front();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0;

    cin >> M >> N;
    input.assign(N + 2, vector<int>(M + 2, -1));
    for(int i = 1;i <= N;i++) {
        for(int j = 1;j <= M;j++) {
            cin >> input[i][j];

            if(input[i][j] != 0) {
                cnt++;

                if(input[i][j] == 1) {
                    grown.push_back(make_pair(i, j));
                }
            }
        }
    }

    if(cnt == N * M) {
        cout << 0;
    }
    else if(!check()) {
        cout << -1;
    }
    else {
        cnt = 0;
        while(grown.size() > 0) {
            tomato();
            cnt++;
        }

        if(!count()) {
            cout << -1;
        }
        else {
            cout << cnt - 1;
        }
    }

    return 0;
}