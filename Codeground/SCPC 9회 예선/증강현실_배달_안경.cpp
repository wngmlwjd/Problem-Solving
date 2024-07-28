#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N, a, b;

    cin >> T;

    for(int t = 0;t < T;t++) {
        cin >> N >> a >> b;

        if(a < b) {
            swap(a, b);
        }

        cout << "Case #" << t + 1 << endl;
        for(int i = 0;i < N / a + 1;i++) {
            if((N - (a * i)) % b == 0) {
                cout << i + (N - (a * i)) / b << endl;
                break;
            }
        }
    }

    return 0;
}