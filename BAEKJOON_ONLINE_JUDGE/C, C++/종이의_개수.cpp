#include <bits/stdc++.h>
using namespace std;

vector<int> output(3, 0);
vector<vector<int>> input;

void divide(int size, int a, int b) {
    vector<int> count(3, 0);

    for(int i = 0;i < size;i++) {
        for(int j = 0;j < size;j++) {
            count[input[a + i][b + j] + 1]++;
        }
    }

    for(int i = 0;i < 3;i++) {
        if(count[i] == size * size) {
            output[i]++;
            return;
        }
    }

    for(int i = 0;i < size;i += size / 3) {
        for(int j = 0;j < size;j += size / 3) {
            divide(size / 3, a + i, b + j);
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

    for(int i = 0;i < 3;i++) {
        cout << output[i] << endl;
    }

    return 0;
}