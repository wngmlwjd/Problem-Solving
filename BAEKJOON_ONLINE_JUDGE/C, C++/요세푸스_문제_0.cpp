#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    deque<int> input;

    cin >> N >> K;
    for(int i = 0;i < N;i++) {
        input.push_back(i + 1);
    }

    cout << "<";
    while(!input.empty()) {
        for(int i = 0;i < K - 1;i++) {
            input.push_back(input.front());
            input.pop_front();
        }

        cout << input.front();
        if(input.size() > 1) {
            cout << ", ";
        }

        input.pop_front();
    }
    cout << ">";

    return 0;
}