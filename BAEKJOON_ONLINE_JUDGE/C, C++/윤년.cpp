#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    cout << (N % 4 == 0 && (N % 100 != 0 || N % 400 == 0)) << '\n';

    return 0;
}