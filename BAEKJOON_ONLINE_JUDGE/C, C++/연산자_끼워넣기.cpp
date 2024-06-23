#include <bits/stdc++.h>
using namespace std;

int N, MAX = -1000000001, MIN = 1000000001;
vector<int> num;

void f(int n, int sum, vector<int> input) {
    if(n == N) {
        MAX = max(MAX, sum);
        MIN = min(MIN, sum);
        return;
    }

    int m;

    for(int i = 0;i < 4;i++) {
        if(input[i] > 0) {
            if(i == 0) {
                m = sum + num[n];      
            }
            else if(i == 1) {
                m = sum - num[n];
            }
            else if(i == 2) {
                m = sum * num[n];
            }
            else {
                m = sum / num[n];
            }

            input[i]--;
            f(n + 1, m, input);
            input[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> input(4, 0);

    cin >> N;
    num.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> num[i];
    }
    for(int i = 0;i < 4;i++) {
        cin >> input[i];
    }

    f(1, num[0], input);

    cout << MAX << '\n' << MIN;

    return 0;
}