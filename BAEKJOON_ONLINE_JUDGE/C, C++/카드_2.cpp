#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    deque<int> card;

    cin >> N;
    for(int i = 0;i < N;i++) {
        card.push_back(i + 1);
    }

    while(card.size() > 1) {
        card.pop_front();
        card.push_back(card.front());
        card.pop_front();
    }

    cout << card.front();

    return 0;
}