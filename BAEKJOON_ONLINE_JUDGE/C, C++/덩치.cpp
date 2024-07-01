#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    vector<int> output;
    vector<pair<int, int>> input;
    
    cin >> N;
    input.assign(N, pair<int, int>(0, 0));
    for(int i = 0;i < N;i++) {
        cin >> input[i].first >> input[i].second;
    }

    output.assign(N, 0);
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            if(j != i) {
                if(input[j].first > input[i].first and input[j].second > input[i].second) {
                    output[i]++;
                }
            }
        }
    }

    for(int i = 0;i < N;i++) {
        cout << output[i] + 1 << ' ';
    }

    return 0;
}