#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, sum = 0;
    vector<int> output;

    while(1) {
        cin >> N;

        if(N == -1) {
            break;
        }

        sum = 0;
        output.clear();
        for(int i = 1;i < N;i++) {
            if(N % i == 0) {
                sum += i;
                output.push_back(i);
            }
        }

        if(sum == N) {
            cout << N << " = ";
            for(int i = 0;i < output.size();i++) {
                cout << output[i];

                if(i < output.size() - 1) {
                    cout << " + ";
                }
            }
            cout << "\n";
        }
        else {
            cout << N << " is NOT perfect.\n";
        }
    }

    return 0;
}