#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string output = "mixed";
    vector<int> input(8, 0);

    for(int i = 0;i < 8;i++) {
        cin >> input[i];
    }

    if(input.front() == 1) {
        output = "ascending";
        for(int i = 1;i < 8;i++) {
            if(input[i] - 1 != input[i - 1]) {
                output = "mixed";
                break;
            }
        }
    }
    else if(input.front() == 8) {
        output = "descending";
        for(int i = 1;i < 8;i++) {
            if(input[i] + 1 != input[i - 1]) {
                output = "mixed";
                break;
            }
        }
    }

    cout << output;

    return 0;
}