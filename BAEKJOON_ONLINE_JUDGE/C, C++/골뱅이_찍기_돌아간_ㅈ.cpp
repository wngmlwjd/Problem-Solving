#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        for(int j = 0;j < N * 3;j++) {
            cout << ' ';
        }
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        cout << '\n';
    }
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        for(int j = 0;j < N * 2;j++) {
            cout << ' ';
        }
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        cout << '\n';
    }
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N * 3;j++) {
            cout << '@';
        }
        cout << '\n';
    }
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        for(int j = 0;j < N * 2;j++) {
            cout << ' ';
        }
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        cout << '\n';
    }
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        for(int j = 0;j < N * 3;j++) {
            cout << ' ';
        }
        for(int j = 0;j < N;j++) {
            cout << '@';
        }
        cout << '\n';
    }

    return 0;
}