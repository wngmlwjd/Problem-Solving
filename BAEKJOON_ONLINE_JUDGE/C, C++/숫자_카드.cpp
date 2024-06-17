#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n;
    set<int> input;

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> n;

        input.insert(n);
    }

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> n;

        cout << ((input.find(n) == input.end()) ? 0 : 1) << ' ';
    }

    return 0;
}