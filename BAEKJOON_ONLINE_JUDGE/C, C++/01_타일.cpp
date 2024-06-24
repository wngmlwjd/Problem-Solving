#include <bits/stdc++.h>
using namespace std;

int N;
vector<long long> output = {1, 1};

void f() {
    for(int i = 2;i <= N;i++) {
        output.push_back((output[i - 2] + output[i - 1]) % 15746);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    f();

    cout << output.back();

    return 0;
}