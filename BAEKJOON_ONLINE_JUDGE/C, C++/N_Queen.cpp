#include <bits/stdc++.h>
using namespace std;

int N, cnt = 0;
vector<int> chess;

void f(int n) {
    if(n == N) {
        cnt++;
        return;
    }

    bool check;

    for(int i = 0;i < N;i++) {
        check = true;
        for(int j = n - 1;j >= 0;j--) {
            if(abs(n - j) == abs(i - chess[j]) || i == chess[j]) {
                check = false;
                break;
            }
        }

        if(check) {
            chess[n] = i;
            f(n + 1);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    chess.assign(N, 0);
    f(0);

    cout << cnt;

    return 0;
}