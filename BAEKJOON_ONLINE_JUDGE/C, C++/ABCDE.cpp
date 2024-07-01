#include <bits/stdc++.h>
using namespace std;

vector<bool> isVisited;
vector<vector<int>> input;

bool isFriend(int n, int cnt) {
    if(cnt == 4) {
        return true;
    }

    isVisited[n] = true;
    for(int i = 0;i < input[n].size();i++) {
        if(!isVisited[input[n][i]]) {
            if(isFriend(input[n][i], cnt + 1)) {
                return true;
            }
        }
    }
    isVisited[n] = false;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, a, b;
    bool Friend = false;

    cin >> N >> M;
    input.assign(N, vector<int>());
    for(int i = 0;i < M;i++) {
        cin >> a >> b;

        input[a].push_back(b);
        input[b].push_back(a);
    }
    for(int i = 0;i < N;i++) {
        sort(input[i].begin(), input[i].end());
    }

    isVisited.assign(N, false);
    for(int i = 0;i < N;i++) {
        if(isFriend(i, 0)) {
            Friend = true;
            break;
        }
    }

    cout << Friend;

    return 0;
}