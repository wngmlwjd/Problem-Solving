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
            cout << stack.front() << '\n';
            stack.pop_front();
        }
        else if(input == "front") {
            cout << stack.front() << '\n';
        }
        else {
            cout << stack.back() << '\n';
        }
    }

    return 0;
}