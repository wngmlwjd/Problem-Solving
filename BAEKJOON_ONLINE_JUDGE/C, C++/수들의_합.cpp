#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int N;

    cin >> N;

    for(long long int i = 1;;i++) {
        N -= i;
        
        if(N <= i) {
            cout << i;
            break;
        }
    }

    return 0;
}