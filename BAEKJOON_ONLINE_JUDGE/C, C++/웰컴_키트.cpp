#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, a, b, sum;
    vector<int> input(6, 0);

    cin >> N;
    for(int i = 0;i < 6;i++) {
        cin >> input[i];
    }
    cin >> a >> b;

    sum = 0;
    for(int i = 0;i < 6;i++) {
        sum += input[i] / a;
        if(input[i] % a != 0) {
            sum++;
        }
    }

    cout << sum << '\n' << N / b << ' ' << N % b;

    return 0;
}