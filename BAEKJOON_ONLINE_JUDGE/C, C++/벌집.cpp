#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 1;

    cin >> N;

    for(int i = 1;;i++) {
        if(N <= sum) {
            cout << i;
            break;
        }

        sum += 6 * i;
    }

    return 0;
}