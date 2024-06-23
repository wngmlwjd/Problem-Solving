#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> input(9, vector<int>(9, 0));
vector<pair<int, int>> zero;

bool check(int a, int b, int n) {
    for(int i = 0;i < 9;i++) {
        if(input[a][i] == n) {
            return false;
        }
        if(input[i][b] == n) {
            return false;
        }
    }

    for(int i = (a / 3) * 3;i < (a / 3) * 3 + 3;i++) {
        for(int j = (b / 3) * 3;j < (b / 3) * 3 + 3;j++) {
            if(input[i][j] == n) {
                return false;
            }
        }
    }

    return true;
}

bool sudoku(int n) {
    if(n == zero.size()) {
        return true;
    }

    for(int i = 0;i < 9;i++) {
        if(check(zero[n].first, zero[n].second, i + 1)) {
            input[zero[n].first][zero[n].second] = i + 1;
            
            if(sudoku(n + 1)) {
                return true;
            }

            input[zero[n].first][zero[n].second] = 0;
        }
    }

    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count = 0;

    for(int i = 0;i < 9;i++) {
        for(int j = 0;j < 9;j++) {
            cin >> input[i][j];

            if(!input[i][j]) {
                count++;
                zero.push_back(make_pair(i, j));
            }
        }
    }

    sudoku(0);

    for(int i = 0;i < 9;i++) {
        for(int j = 0;j < 9;j++) {
            cout << input[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}