#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> input, sum;

void f() {
    sum.push_back(input[0]);
    for(int i = 1;i < N;i++) {
        sum.push_back(max(sum[i - 1] + input[i], input[i]));
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    input.assign(N, 0);
    for(int i = 0;i < N;i++) {
        cin >> input[i];
    }

    f();

    cout << *max_element(sum.begin(), sum.end());

    return 0;
}