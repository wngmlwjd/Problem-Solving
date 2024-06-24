#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    vector<vector<int>> input, cost;

    cin >> N;
    input.assign(N, vector<int>(3, 0));
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < 3;j++) {
            cin >> input[i][j];
        }
    }

    cost.assign(N, vector<int>(3, 0));
    for(int i = 0;i < 3;i++) {
        cost[0][i] = input[0][i];
    }
    for(int i = 1;i < N;i++) {
        cost[i][0] = min(cost[i - 1][1], cost[i - 1][2]) + input[i][0];
        cost[i][1] = min(cost[i - 1][0], cost[i - 1][2]) + input[i][1];
        cost[i][2] = min(cost[i - 1][0], cost[i - 1][1]) + input[i][2];
    }

    cout << min(min(cost.back()[0], cost.back()[1]), cost.back()[2]);

    return 0;
}