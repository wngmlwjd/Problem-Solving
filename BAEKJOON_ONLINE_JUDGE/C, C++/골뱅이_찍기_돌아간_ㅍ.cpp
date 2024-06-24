#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    for(int i = 0;i < N * 5;i++) {
        if(i / N == 1 or i / N == 3) {
            for(int j = 0;j < N * 5;j++) {
                cout << '@';
            }
        }
        else {
            for(int j = 0;j < N;j++) {
                cout << '@';
            }
            for(int j = 0;j < N * 3;j++) {
                cout << ' ';
            }
            for(int j = 0;j < N;j++) {
                cout << '@';
            }
        }
        cout << '\n';
    }

    return 0;
}