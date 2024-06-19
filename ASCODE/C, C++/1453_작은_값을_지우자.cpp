#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, N;
    string output;
    vector<int> a, b;

    cin >> T;

    while(T--) {
        cin >> N;
        a.assign(N, 0);
        for(int i = 0;i < N;i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        output = "YES";
        while(a.size() > 1) {
            b.clear();
            for(int i = 0;i < a.size() - 1;i++) {
                if(a[i + 1] - a[i] > 1) {
                    b.push_back(a[i]);
                }
            }
            b.push_back(a.back());

            if(a == b) {
                output = "NO";
                break;
            }

            a = b;
        }

        cout << output << '\n';
    }

    return 0;
}