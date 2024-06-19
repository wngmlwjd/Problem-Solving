#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;
    string input;
    deque<int> queue;

    cin >> T;

    while(T--) {
        cin >> input;

        if(input == "push") {
            cin >> n;

            queue.push_back(n);
        }
        else if(input == "size") {
            cout << queue.size() << '\n';
        }
        else if(input == "empty") {
            cout << queue.empty() << '\n';
        }
        else if(queue.empty()) {
            cout << "-1\n";
        }
        else if(input == "pop") {
            cout << queue.front() << '\n';

            queue.pop_front();
        }
        else if(input == "front") {
            cout << queue.front() << '\n';
        }
        else if(input == "back") {
            cout << queue.back() << '\n';
        }
    }

    return 0;
}