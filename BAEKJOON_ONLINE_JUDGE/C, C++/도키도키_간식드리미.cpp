#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, n = 1;
    string output = "Nice";
    vector<int> input;

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> M;

        if(M == n) {
            n++;
        }
        else {
            input.push_back(M);
        }

        while(!input.empty() && input.back() == n) {
            input.pop_back();
            n++;
        }
    }

    if(!input.empty()) {
        output = "Sad";
    }

    cout << output;

    return 0;
}