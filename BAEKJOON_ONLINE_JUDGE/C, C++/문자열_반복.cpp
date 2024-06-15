#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    string input;

    cin >> T;

    while(T--) {
        cin >> N >> input;

        for(int i = 0;i < input.length();i++) {
            for(int j = 0;j < N;j++) {
                cout << input[i];
            }
        }
        cout << '\n';
    }

    return 0;
}