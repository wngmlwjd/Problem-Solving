#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, count = 0;

    cin >> N;

    for(int i = 1;i * i <= N;i++) {
        count++;
    }

    cout << count;

    return 0;
}