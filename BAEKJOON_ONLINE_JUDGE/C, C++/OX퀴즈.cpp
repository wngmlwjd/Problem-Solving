#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, sum, n;
    string input;

    cin >> T;

    while(T--) {
        cin >> input;

        sum = 0;
        n = 1;
        for(int i = 0;i < input.length();i++) {
            if(input[i] == 'O') {
                sum += n++;
            }
            else {
                n = 1;
            }
        }

        cout << sum << '\n';
    }

    return 0;
}