#include <bits/stdc++.h>
using namespace std;

map<int, int> input;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n;

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> n;

        input[n]++;
    }

    cin >> N;
    for(int i = 0;i < N;i++) {
        cin >> n;

        cout << input[n] << ' ';
    }

    return 0;
}