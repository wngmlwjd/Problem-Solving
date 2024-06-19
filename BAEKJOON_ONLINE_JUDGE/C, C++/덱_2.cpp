#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, n;
    deque<int> input;

    cin >> T;

    while(T--) {
        cin >> N;

        if(N == 1) {
            cin >> n;

            input.push_front(n);
        }
        else if(N == 2) {
            cin >> n;

            input.push_back(n);
        }
        else if(N == 5) {
            cout << input.size() << '\n';
        }
        else if(N == 6) {
            cout << input.empty() << '\n';
        }
        else if(input.empty()) {
            cout << "-1\n";
        }
        else if(N == 3) {
            cout << input.front() << '\n';

            input.pop_front();
        }
        else if(N == 4) {
            cout << input.back() << '\n';

            input.pop_back();
        }
        else if(N == 7) {
            cout << input.front() << '\n';
        }
        else if(N == 8) {
            cout << input.back() << '\n';
        }
    }

    return 0;
}