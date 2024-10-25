#include <bits/stdc++.h>
using namespace std;

string output = "";
vector<vector<int>> input;

void divide(int size, int a, int b) {
    int sum = 0;

    for(int i = 0;i < size;i++) {
        sum += accumulate(input[a + i].begin() + b, input[a + i].begin() + b + size, 0);
    }

    if(sum == 0 or sum == size * size) {
        output += sum == 0 ? "0" : "1";
    }
    else {
        output += "(";
        for(int i = 0;i < size;i += size / 2) {
            for(int j = 0;j < size;j += size / 2) {
                divide(size / 2, a + i, b + j);
            }
        }
        output += ")";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    string str;

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> str;

        input.push_back(vector<int>(0, 0));
        for(int j = 0;j < N;j++) {
            input[i].push_back(int(str[j] - '0'));
        }
    }

    divide(N, 0, 0);

    cout << output;

    return 0;
}