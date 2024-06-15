#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    vector<bool> input(30, false);

    for(int i = 0;i < 28;i++) {
        cin >> n;

        input[n - 1] = true;
    }

    for(int i = 0;i < 30;i++) {
        if(!input[i]) {
            cout << i + 1 << '\n';
        }
    }

    return 0;
}