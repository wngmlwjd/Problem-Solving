#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    for(int i = 0;i < N * 5;i++) {
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        for(int j = 0;j < N;j++) {
            if(i < N) {
                cout << '@';
            }
            else {
                cout << ' ';
            }
        }
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        for(int j = 0;j < N;j++) {
            if(i >= N * 4) {
                cout << '@';
            }
            else {
                cout << ' ';
            }
        }
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        cout << '\n';
    }

    return 0;
}