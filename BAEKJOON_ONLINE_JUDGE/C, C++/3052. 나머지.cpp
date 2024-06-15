#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    set<int> input;

    for(int i = 0;i < 10;i++) {
        cin >> N;

        input.insert(N % 42);
    }

    cout << input.size() << '\n';

    return 0;
}