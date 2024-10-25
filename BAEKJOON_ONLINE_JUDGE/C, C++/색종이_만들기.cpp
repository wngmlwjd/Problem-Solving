#include <bits/stdc++.h>
using namespace std;

int white = 0, blue = 0;
vector<vector<int>> input;

void divide(int size, int a, int b) {
    int sum = 0;

    for(int i = 0;i < size;i++) {
        sum += accumulate(input[a + i].begin() + b, input[a + i].begin() + b + size, 0);
    }

    if(sum == 0) {
        white++;
    }
    else if(sum == size * size) {
        blue++;
    }
    else {
        for(int i = a;i < a + size;i += size / 2) {
            for(int j = b;j < b + size;j += size / 2) {
                divide(size / 2, i, j);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;
    input.assign(N, vector<int>(N, 0));
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < N;j++) {
            cin >> input[i][j];
        }
    }

    divide(N, 0, 0);

    cout << white << endl << blue;

    return 0;
}