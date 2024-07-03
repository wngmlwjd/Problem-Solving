#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    if(N % 5 > 0) {
        cout << N / 5 + 1;
    }
    else {
        cout << N / 5;
    }

    return 0;
}