#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, max, cnt, maxCnt, n, pre;
    vector<int> input;

    cin >> N;
    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }

    sort(input.begin(), input.end());

    cout << round(accumulate(input.begin(), input.end(), 0.0) / N) + 0.0 << '\n';
    cout << input[N / 2] << '\n';

    max = n = cnt = 0;
    maxCnt = 1;
    pre = input[0];
    for(int i = 0;i <= N;i++) {
        if(i == N || input[i] != pre) {
            if(max < cnt) {
                max = cnt;
                n = pre;
                maxCnt = 1;
            }
            else if(max == cnt) {
                if(maxCnt == 1) {
                    n = pre;
                    maxCnt++;
                }
            }
            
            pre = input[i];
            cnt = 1;
        }
        else {
            cnt++;
        }
    }

    cout << n << '\n';
    cout << input.back() - input.front();

    return 0;
}