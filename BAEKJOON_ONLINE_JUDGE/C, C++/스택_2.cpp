#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n, m;
    stack<int> input;

    cin >> T;

    while(T--) {
        cin >> n;

        if(n == 1) {
            cin >> m;

            input.push(m);
        }
        else if(n == 2) {
            if(input.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << input.top() << '\n';

                input.pop();
            }
        }
        else if(n == 3) {
            cout << input.size() << '\n';
        }
        else if(n == 4) {
            cout << input.empty() << '\n';
        }
        else {
            if(input.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << input.top() << '\n';
            }
        }
    }

    return 0;
}