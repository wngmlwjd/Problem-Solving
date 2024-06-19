#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, a = 0, b = 0;

    cin >> N >> M;

    a = N / 45;
    N %= 45;
    if(N >= 26) {
        a++;
    }
    else if(N > 0) {
        b = 1;
    }

    if(M >= 15) {
        b++;
    }

    if(a > 0) {
        cout << "Big bus : " << a << '\n';
    }
    if(b > 0) {
        cout << "Small bus : " << b << '\n';
    }

    return 0;
}