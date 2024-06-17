#include <bits/stdc++.h>
using namespace std;

vector<string> input;

int paint(int a, int b, char n) {
    int count = 0;

    for(int i = 0;i < 8;i++) {
        for(int j = 0;j < 8;j++) {
            if(j % 2 == 0) {
                if(n != input[a + i][b + j]) {
                    count++;
                }
            }
            else {
                if(n == input[a + i][b + j]) {
                    count++;
                }
            }
        }

        n = (n == 'W') ? 'B' : 'W';
    }

    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, output;

    cin >> N >> M;
    input.assign(N, "");
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }

    output = 65;
    for(int i = 0;i <= N - 8;i++) {
        for(int j = 0;j <= M - 8;j++) {
            output = min(output, min(paint(i, j, 'W'), paint(i, j, 'B')));
        }
    }

    cout << output;

    return 0;
}