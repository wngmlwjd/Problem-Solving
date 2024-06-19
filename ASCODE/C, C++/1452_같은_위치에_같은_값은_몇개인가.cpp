#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, a, b, count;
    vector<int> input;

    while(1) {
        cin >> N;

        if(N == 0) {
            break;
        }

        input.assign(N, 0);
        for(int i = 0;i < N;i++) {
            cin >> input[i];
        }

        sort(input.begin(), input.end());

        a = 0;
        b = N - 1;
        count = 0;
        for(int i = 0;i < N;i++) {
            if(input[a] == input[b]) {
                count++;
            }

            a++;
            b--;
        }

        cout << count << '\n';
    }

    return 0;
}