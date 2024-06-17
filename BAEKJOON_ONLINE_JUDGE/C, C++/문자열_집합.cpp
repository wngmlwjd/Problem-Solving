#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, count = 0;
    string input;
    set<string> check;

    cin >> N >> M;
    for(int i = 0;i < N;i++) {
        cin >> input;

        check.insert(input);
    }

    for(int i = 0;i < M;i++) {
        cin >> input;

        count += (check.find(input) != check.end());
    }
    
    cout << count;

    return 0;
}