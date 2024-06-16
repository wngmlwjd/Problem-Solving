#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, n, sum = 0;
    vector<int> input;

    cin >> N >> M;
    for(int i = 0;i < N;i++) {
        cin >> n;

        if(n <= M) {
            input.push_back(n);
        }
    }

    sort(input.begin(), input.end());

    N = input.size();
    for(int i = 0;i < N - 2;i++) {
        for(int j = i + 1;j < N - 1;j++) {
            if(input[i] + input[j] > M) {
                break;
            }

            for(int k = j + 1;k < N;k++) {
                if(input[i] + input[j] + input[k] > M) {
                    break;
                }

                sum = max(sum, input[i] + input[j] + input[k]);
            }
        }
    }    

    cout << sum;

    return 0;
}