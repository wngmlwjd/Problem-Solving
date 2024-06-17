#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    string input;
    map<string, string> book;

    cin >> N >> M;
    for(int i = 0;i < N;i++) {
        cin >> input;

        book[input] = to_string(i + 1);
        book[to_string(i + 1)] = input;
    }

    for(int i = 0;i < M;i++) {
        cin >> input;

        cout << book[input] << '\n';
    }

    return 0;
}