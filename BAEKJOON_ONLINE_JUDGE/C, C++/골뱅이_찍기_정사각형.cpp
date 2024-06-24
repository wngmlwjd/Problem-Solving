#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    N += 2;
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            if(i == 0 or i == N - 1 or j == 0 or j == N - 1) {
                cout << '@';
            }
            else {
                cout << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}