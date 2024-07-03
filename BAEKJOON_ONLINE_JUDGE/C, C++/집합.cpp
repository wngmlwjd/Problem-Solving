#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    string input;
    vector<bool> set(20, 0);

    cin >> T;

    while(T--) {
        cin >> input;

        if(input == "all") {
            for(int i = 0;i < 20;i++) {
                set[i] = true;
            }
        }
        else if(input == "empty") {
            for(int i = 0;i < 20;i++) {
                set[i] = false;
            }
        }
        else {
            cin >> N;

            if(input == "add") {
                set[N - 1] = true;
            }
            else if(input == "remove") {
                set[N - 1] = false;
            }
            else if(input == "check") {
                cout << set[N - 1] << '\n';
            }
            else if(input == "toggle") {
                set[N - 1] = !set[N - 1];
            }
        }
    }

    return 0;
}