#include <bits/stdc++.h>
using namespace std;

long long int answer;
vector<pair<int, int>> cnt;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, S, E;
    pair<int, int> pair;
    vector<int> input;

    cin >> T;

    for(int t = 0;t < T;t++) {
        cin >> N >> S >> E;
        input.assign(N, 0);
        for(int i = 0;i < N;i++) {
            cin >> input[i];
        }

        cout << "Case #" << t + 1 << endl;

        // -- default --

        answer = max(S, E) * N;

        
    }

    return 0;
}