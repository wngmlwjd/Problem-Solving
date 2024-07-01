#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;
    string input;
    deque<int> stack;

    cin >> T;

    while(T--) {
        cin >> input;

        if(input == "push") {
            cin >> n;

            stack.push_back(n);
        }
        else if(input == "size") {
            cout << stack.size() << '\n';
        }
        else if(input == "empty") {
            cout << stack.empty() << '\n';
        }
        else if(stack.empty()) {
            cout << "-1\n";
        }
        else if(input == "pop") {
            cout << stack.back() << '\n';
            stack.pop_back();
        }
        else {
            cout << stack.back() << '\n';
        }
    }

    return 0;
}