#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, n = 1, a = 1, b = 1;

    cin >> N;

    for(int i = 0;i < N - 1;i++) {
        if(n == 1) {
            b++;
            n = 2;
        }
        else if(n == 2) {
            a++;
            b--;

            if(b == 1) {
                n = 3;
            }
        }
        else if(n == 3) {
            a++;
            n = 4;
        }
        else if(n == 4) {
            a--;
            b++;

            if(a == 1) {
                n = 1;
            }
        }
    }

    cout << a << "/" << b;

    return 0;
}