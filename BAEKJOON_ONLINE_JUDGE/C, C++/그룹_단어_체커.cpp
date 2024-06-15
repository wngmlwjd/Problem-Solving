#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n, cnt = 0;
    bool groupWord;
    string input;
    vector<int> check;

    cin >> T;

    while(T--) {
        cin >> input;

        groupWord = true;
        check.assign(26, -1);
        for(int i = 0;i < input.length();i++) {
            n = int(input[i]) - 'a';

            if(check[n] != -1 && check[n] != i - 1) {
                groupWord = false;
                break;
            }

            check[n] = i;
        }

        if(groupWord) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}