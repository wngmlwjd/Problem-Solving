#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, sum = 0, m = 0;
    vector<bool> prime(10001, true);

    prime[0] = prime[1] = false;
    for(int i = 2;i < 10001;i++) {
        if(prime[i]) {
            for(int j = 2;i * j < 10001;j++) {
                prime[i * j] = false;
            }
        }
    }

    cin >> a >> b;

    for(int i = a;i <= b;i++) {
        if(prime[i]) {
            sum += i;

            if(m == 0) {
                m = i;
            }
        }
    }

    if(sum == 0) {
        cout << -1;
    }
    else {
        cout << sum << '\n' << m;
    }

    return 0;
}