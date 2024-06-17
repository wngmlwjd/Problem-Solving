#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, count = 0;
    string n;

    cin >> N;

    for(int i = 666;;i++) {
        n = to_string(i);

        for(int j = 0;j < n.length() - 2;j++) {
            if(n[j] == '6' && n[j + 1] == '6' && n[j + 2] == '6') {
                count++;
                break;
            }
        }

        if(count == N) {
            cout << i;
            break;
        }
    }

    return 0;
}