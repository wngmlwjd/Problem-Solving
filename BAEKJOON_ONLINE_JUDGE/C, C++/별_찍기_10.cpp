#include <bits/stdc++.h>
using namespace std;

vector<string> output;

void star(int a, int b, int N) {
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            output[a + N + i][b + N + j] = ' ';
        }
    }

    if(N > 1) {
        for(int i = 0;i < N * 3;i += N) {
            for(int j = 0;j < N * 3;j += N) {
                star(a + i, b + j, N / 3);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string str = "";

    cin >> N;
    for(int i = 0;i < N;i++) {
        str += "*";
    }
    output.assign(N, str);

    star(0, 0, N / 3);

    for(int i = 0;i < N;i++) {
        cout << output[i] << '\n';
    }

    return 0;
}