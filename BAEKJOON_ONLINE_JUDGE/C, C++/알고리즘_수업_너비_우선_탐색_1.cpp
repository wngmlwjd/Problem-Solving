#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, R, a, b, cnt = 1;
    vector<int> output;
    vector<vector<int>> input;
    deque<int> check;

    cin >> N >> M >> R;
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

    output.assign(N, 0);
    check.push_back(R - 1);
    output[R - 1] = cnt++;
    while(!check.empty()) {
        a = check.front();
        check.pop_front();

        for(int i = 0;i < input[a].size();i++) {
            if(output[input[a][i]] == 0) {
                check.push_back(input[a][i]);
                output[input[a][i]] = cnt++;
            }
        }
    }

    for(int i = 0;i < N;i++) {
        cout << output[i] << '\n';
    }

    return 0;
}