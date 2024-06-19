#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n;
    deque<pair<int, int>> input;

    cin >> N;
    input.assign(N, pair<int, int>(0, 0));
    for(int i = 0;i < N;i++) {
        cin >> input[i].second;
        input[i].first = i + 1;
    }

    while(!input.empty()) {
        n = input.front().second;
        cout << input.front().first << ' ';
        input.pop_front();
        
        if(n > 0) {
            for(int i = 0;i < n - 1;i++) {
                input.push_back(input.front());
                input.pop_front();
            }
        }
        else {
            for(int i = 0;i < -n;i++) {
                input.push_front(input.back());
                input.pop_back();
            }
        }
    }

    return 0;
}