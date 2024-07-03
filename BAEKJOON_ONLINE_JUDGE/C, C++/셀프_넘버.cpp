#include <bits/stdc++.h>
using namespace std;

int f(int n) {
    int sum = n;

    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int ret;
    vector<bool> output(10001, true);

    for(int i = 1;i <= 10000;i++) {
        ret = f(i);

        if(ret <= 10000) {
            output[ret] = false;
        }
    }

    for(int i = 1;i < 10001;i++) {
        if(output[i]) {
            cout << i << '\n';
        }
    }

    return 0;
}