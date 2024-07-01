#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
vector<vector<int>> child;

void leaf(int n) {
    if(child[n].size() == 0) {
        cnt++;
        return;
    }

    for(int i = 0;i < child[n].size();i++) {
        leaf(child[n][i]);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, root = -1;
    vector<int> input;

    cin >> N;
    input.assign(N, 0);
    child.assign(N, vector<int>());
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }
    cin >> M;
    for(int i = 0;i < N;i++) {
        if(i == M) {
            continue;
        }

        if(input[i] == -1) {
            root = i;
        }
        else {
            child[input[i]].push_back(i);
        }
    }

    if(root != -1) {
        leaf(root);
    }

    cout << cnt;

    return 0;
}