#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n;
    vector<int> isQueue;
    deque<int> input;

    cin >> N;
    isQueue.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> isQueue[i];
    }
    for(int i = 0;i < N;i++) {
        cin >> n;

        if(!isQueue[i]) {
            input.push_back(n);
        }
    }

    cin >> N;
    while(N--) {
        cin >> n;

        if(input.empty()) {
            cout << n << ' ';
            continue;
        }

        cout << input.back() << ' ';

        input.push_front(n);
        input.pop_back();
    }

    return 0;
}