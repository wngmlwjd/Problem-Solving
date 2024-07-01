#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, M, n, m;
    deque<pair<int, int>> input;

    cin >> T;

    while(T--) {
        cin >> N >> M;
        input.assign(N, pair<int, int>(0, 0));
        for(int i = 0;i < N;i++) {
            cin >> input[i].second;

            input[i].first = i;
        }

        for(int i = 0;i < N;i++) {
            n = 0;
            m = input.front().second;
            for(int j = 1;j < input.size();j++) {
                if(m < input[j].second) {
                    n = j;
                    m = input[j].second;
                }
            }

            for(int j = 0;j < n;j++) {
                input.push_back(input.front());
                input.pop_front();
            }

            if(input.front().first == M) {
                cout << i + 1 << '\n';
                break;
            }

            input.pop_front();
        }
    }

    return 0;
}