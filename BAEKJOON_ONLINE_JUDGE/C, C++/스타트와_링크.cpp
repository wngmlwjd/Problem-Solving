#include <bits/stdc++.h>
using namespace std;

int N, score;
vector<int> team;
vector<vector<int>> input;

int sum(int n) {
    int s = 0;

    for(int i = 0;i < N;i++) {
        if(team[i] == n) {
            for(int j = i + 1;j < N;j++) {
                if(team[j] == n) {
                    s += input[i][j] + input[j][i];
                }
            }
        }
    }

    return s;
}

void f(int n, int cnt1, int cnt2) {
    if(n == N) {
        score = min(score, abs(sum(1) - sum(2)));
    }

    if(cnt1 < N / 2) {
        team[n] = 1;
        f(n + 1, cnt1 + 1, cnt2);
    }
    if(cnt2 < N / 2) {
        team[n] = 2;
        f(n + 1, cnt1, cnt2 + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    input.assign(N, vector<int>(N, 0));
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            cin >> input[i][j];
        }
    }

    team.assign(N, 0);
    score = 100 * N;
    f(0, 0, 0);

    cout << score;

    return 0;
}